#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n;
    vector <int> adj[n+1];

    int u,v;
    for(int i=0; i<n-1; i++)
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


    int src=1;

    bool visited[n+1]={false};
    int level[n+1];
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

    int qq,x;
    cin>>qq;
    int min=n+1,ans;


    for(int i=0; i<qq; i++)
    {
        cin>>x;
        if(level[x]<min)
        {
            min=level[x];
            ans=x;

        }
    }

    cout<<ans<<endl;

    return 0;


}


