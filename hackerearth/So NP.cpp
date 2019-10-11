#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int nn;

void dfs(int src,vector <int> adj[],bool visited[])
{

    visited[src]=true;


    //cout<<src<<" ** "<<endl;;
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            nn++;
            dfs(x,adj,visited);
        }

    }


}

int main()
{
    faster

    int n,m,k;
    cin>>n>>m>>k;

    vector <int> adj[n+1];
    bool visited[n+1];

    for(int i=1; i<=n; i++)
        visited[i]=false;


    int u,v;
    for(int i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int c=0,req=0;

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            nn=1;
            dfs(i,adj,visited);
            c++;
            req=req+(nn-1);
            //cout<<"nn= "<<nn<<endl;
        }

    }

    //cout<<c<<" "<<req<<endl;

    if(c>k)
        cout<<-1<<endl;
    else
    {
        cout<<(m-req)+(k-c)<<endl;
    }





    return 0;
}
