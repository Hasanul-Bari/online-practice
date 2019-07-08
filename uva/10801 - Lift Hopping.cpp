#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

map<int,int> p;

class node
{
public:
    int name;
    int cost;

    node() {}

    node(int n,int c)
    {
        name=n;
        cost=c;
    }

};

bool operator<(node a,node b)   ///makes the priority queue as min cost node at top
{
    return b.cost<a.cost;
}

void printpath(int u,int s)
{
    if(u==s)
    {
        cout<<u<<" ";
        return ;
    }
    printpath(p[u],s);

    cout<<u<<" ";

}


int main()
{
    //faster

    int n,k;
    cin>>n>>k;

    int t[n];
    for(int i=0; i<n; i++)
        cin>>t[i];

    char c=getchar();
    string s,h;
    int x,temp;
    vector<int> v[n];
    for(int i=0; i<n; i++)
    {
        getline(cin,s);
        //cout<<s<<endl;

        for(int j=0; j<s.length(); j++)
        {
            if(s[j]==' ')
            {
                stringstream ss(h);
                ss>>x;
                cout<<x<<" ";
                v[i].push_back(x);
                h.clear();
            }
            else
            {
                h=h+s[j];

            }
        }
        stringstream ss(h);
        ss>>x;
        cout<<x<<endl;
        v[i].push_back(x);
        h.clear();
    }


    vector <int> adj[105];
    vector <int> w[105];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            if(j!=0)
            {
                //cout<<v[i][j]<<" ";
                int p=v[i][j-1];
                int q=v[i][j];
                int z=(q-p)*t[i];
                adj[p].push_back(q);
                adj[q].push_back(p);
                w[p].push_back(z);
                w[q].push_back(z);
            }
        }
        //cout<<endl;
    }

    /*for(int i=0; i<100; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<"("<<w[i][j]<<") ";
        }
        cout<<endl;
    }*/






    int src=0;

    long long d[100];

    for(int i=0; i<100; i++)
        d[i]=1e18;
    d[src]=0;


    node srcn(src,d[src]);

    priority_queue <node> q;

    q.push(srcn);

    while(q.empty()!=1)
    {
        node top=q.top();
        int u=top.name;

        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(d[u]+w[u][i]<d[v])
            {

                d[v]=d[u]+w[u][i];
                p[v]=u;



                node temp(v,d[v]);

                q.push(temp);
            }
        }
    }

    /*for(int i=0; i<100; i++)
        cout<<d[i]<<endl;*/

    if(d[k]==1e18)
        cout<<"No path"<<endl;
    else
    {
        //printpath(k,src);
        cout<<d[k]<<endl;
    }

    return 0;
}


