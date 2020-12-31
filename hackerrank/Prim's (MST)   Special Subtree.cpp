#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;


class node
{
public:
    int name;
    int cost;
    int par;

    node() {}

    node(int n,int c)
    {
        name=n;
        cost=c;
        par=0;
    }

};

bool operator<(node a,node b)   ///makes the priority queue as min cost node at top
{
    return b.cost<a.cost;
}


int main()
{
    faster

    int n,e;
    cin>>n>>e;
    vector <int> adj[n+1];
    vector <int> w[n+1];

    int u,v,z;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v>>z;
        adj[u].push_back(v);
        adj[v].push_back(u);
        w[u].push_back(z);
        w[v].push_back(z);
    }

    int src;
    cin>>src;

    bool visited[n+1]= {false};


    int c=0,ans=0;

    priority_queue <node> q;
    visited[src]=true;

    for(int i=0; i<adj[src].size(); i++)
    {
        int v=adj[src][i];
        node temp(v,w[src][i]);
        temp.par=src;

        q.push(temp);
    }


    while(1)
    {
        node top=q.top();
        int u=top.name;



        q.pop();
        if(visited[u]==false)
        {

            for(int i=0; i<adj[u].size(); i++)
            {
                int v=adj[u][i];
                node temp(v,w[u][i]);
                temp.par=u;
                q.push(temp);

            }
            c++;
            visited[u]=true;
            //cout<<top.cost<<endl;
            ans=ans+top.cost;

            if(c==n-1)
                break;

        }


    }
    cout<<ans<<endl;




    return 0;
}


