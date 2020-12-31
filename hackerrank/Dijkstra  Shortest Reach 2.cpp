#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n,e,t;
    cin>>t;
    for(int h=0; h<t; h++)
    {

        cin>>n>>e;
        vector <int> adj[n+1];
        vector <int> cost[n+1];

        int u,v,w;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v>>w;
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);

        }


        int src;
        cin>>src;
        //cin>>src;

        long long d[n+1];
        for(int i=1; i<=n; i++)
            d[i]=1e18;

        priority_queue <int> q;


        d[src]=0;

        q.push(src);

        while(q.empty()!=1)
        {
            int x=q.top();
            q.pop();
            for(int i=0; i<adj[x].size(); i++)
            {
                int y=adj[x][i];
                if(d[x]+cost[x][i]<d[y])
                {
                    d[y]=d[x]+cost[x][i];
                    q.push(y);
                }
            }
        }

        for(int i=1; i<=n; i++)
        {
            if(i!=src)
            {
                if(d[i]==1e18)
                    cout<<-1<<" ";
                else
                    cout<<d[i]<<" ";
            }
        }

        cout<<endl;

    }
    return 0;


}





