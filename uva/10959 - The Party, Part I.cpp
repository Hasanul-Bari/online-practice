#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e,t;
    cin>>t;
    for(int h=1; h<=t; h++)
    {

        cin>>n>>e;
        vector <int> adj[n];

        int u,v;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            if(u!=v)
            {
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
            else
                adj[u].push_back(v);
        }

       /* for(int i=0; i<n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }*/

        int src=0;

        bool visited[n]= {false};
        int level[n];
        queue <int> q;

        visited[src]=true;
        level[src]=0;

        q.push(src);

        while(q.empty()!=1)
        {
            int x=q.front();
            q.pop();
            for(int i=0; i<adj[x].size(); i++)
            {
                int y=adj[x][i];
                if(visited[y]==false)
                {
                    visited[y]=true;
                    level[y]=level[x]+1;
                    q.push(y);
                }
            }
        }

        for(int i=1; i<n; i++)
            cout<<level[i]<<endl;


        if(h!=t)
            cout<<endl;

    }

    return 0;

}


