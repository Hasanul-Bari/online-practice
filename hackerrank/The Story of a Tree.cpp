#include<bits/stdc++.h>
using namespace std;

map<int,int> p;

/*void printpath(int u,int s)
{
    if(u==s)
    {
        //cout<<s<<" "<<u<<endl;
        return ;
    }
    printpath(p[u],s);

    cout<<p[u]<<" "<<u<<endl;
}*/

int main()
{
    int n,e;
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

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    int src;
    cin>>src;

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
                p[y]=x;
            }
        }
    }




}


