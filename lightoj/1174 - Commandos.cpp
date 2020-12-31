#include<bits/stdc++.h>
using namespace std;



int bfs(int n, vector <int> adj[], int src,int des)
{
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

        //cout<<level[des]<<endl;
        return level[des];
}

int main()
{
    int n,e,t,c,src,des;;
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

        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }*/

        cin>>src>>des;
        int s,ans;

        for(int i=0; i<n; i++)
        {
            s=0;
            s=s+bfs(n,adj,src,i);
            s=s+bfs(n,adj,i,des);

            if(i==0)
                ans=s;
            else
            {
                if(s>ans)
                    ans=s;
            }

        }

        cout<<"Case "<<h<<": "<<ans<<endl;


    }

    return 0;




}
