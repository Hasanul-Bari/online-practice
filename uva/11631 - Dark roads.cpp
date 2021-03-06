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
    ll cost;

    node() {}

    node(int n,ll c)
    {
        name=n;
        cost=c;
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
    while(1)
    {

        cin>>n>>e;
        if(n==0 && e==0)
            break;

        vector <int> adj[n];
        vector <ll> w[n];

        int u,v,z;
        ll s=0;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v>>z;
            s=s+z;
            adj[u].push_back(v);
            adj[v].push_back(u);
            w[u].push_back(z);
            w[v].push_back(z);
        }

        int src=0;

        bool visited[n]= {false};


        int c=0;
        ll ans=0;


        priority_queue <node> q;
        visited[src]=true;

        for(int i=0; i<adj[src].size(); i++)
        {
            int v=adj[src][i];
            node temp(v,w[src][i]);
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
        cout<<s-ans<<endl;

    }



    return 0;
}




