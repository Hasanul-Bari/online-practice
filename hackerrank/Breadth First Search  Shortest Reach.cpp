#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);


    int n,e,t;
    cin>>t;
    for(int h=1; h<=t; h++)
    {

        cin>>n>>e;
        vector <int> adj[n+1];

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

        /*for(int i=1; i<=n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }*/

        int src;
        cin>>src;

        queue <int> q;

        map<int,int> visited;
        map<int,int> level;
        map<int,int> :: iterator itr;


        visited[src]=1;

        q.push(src);

        while(q.empty()!=1)
        {
            int x=q.front();
            q.pop();
            for(int i=0; i<adj[x].size(); i++)
            {
                int y=adj[x][i];
                if(visited[y]==0)
                {
                    visited[y]=1;
                    level[y]=level[x]+1;
                    q.push(y);
                }
            }
        }



        for(int i=1; i<=n; i++)
        {
            if(i!=src)
            {
                if(level[i]==0)
                    cout<<-1<<" ";
                else
                    cout<<level[i]*6<<" ";
            }
        }

        cout<<endl;

    }

    return 0;




}

