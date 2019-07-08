#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,e;
    cin>>n>>e;

    vector <long long> adj[n+1];
    vector <long long> cost[n+1];


    long long u,v,w;
    for(long long i=0; i<e; i++)
    {
        cin>>u>>v>>w;
        if(u!=v)
        {
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        else
        {
            adj[u].push_back(v);
            cost[u].push_back(w);
        }
    }

    /*for(int i=1; i<=n; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ("<<cost[i][j]<<")    ";
        }
        cout<<endl;
    }*/

    long long src,ans,s,k;
    cin>>k>>s;
    ans=k;

    bool visited[n+1]= {true};
    //int level[n+1];
    queue <long long> q;

    for(long long h=0; h<k; h++)
    {
        cin>>src;

        visited[src]=true;
        //level[src]=0;

        q.push(src);

        while(q.empty()!=1)
        {
            long long x=q.front();
            q.pop();
            for(long long i=0; i<adj[x].size(); i++)
            {
                long long y=adj[x][i];
                long long rel=cost[x][i];
                if(visited[y]==false)
                {
                    if(rel<=s)
                        ans++;
                    visited[y]=true;
                    //level[y]=level[x]++;
                    q.push(y);
                }
            }
        }

    }

    cout<<ans<<endl;
    return 0;

}
