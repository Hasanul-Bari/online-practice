#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;




void dfs(int src,vector <int> adj[],int level[],bool visited[])
{

    visited[src]=true;


    cout<<src<<" ";
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            level[x]=level[src]+1;
            dfs(x,adj,level,visited);

        }

    }

}

int main()
{
    faster

    int n,k;
    cin>>n>>k;

    vector <int> adj[n+1];
    bool visited[n+1];
    int level[n+1];


    int u,v;
    for(int i=1; i<n; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        visited[i]=false;
        level[i]=0;
    }
    visited[n]=false;
    level[n]=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<i<<" "<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    level[1]=0;


    dfs(1,adj,level,visited);
    cout<<endl;


    for(int i=1; i<=n; i++)
    {
        cout<<i<<" "<<level[i]<<endl;
    }

    return 0;
}
/*
8 14
1 4
1 2
1 7
2 5
2 7
3 2
3 5
3 8
4 6
4 7
5 7
6 1
7 6
8 7
*/

