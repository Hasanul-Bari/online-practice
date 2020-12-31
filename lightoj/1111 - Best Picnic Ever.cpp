#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

vector <int> adj[1005];
bool visited[1005];     // default initialize to false/0

bool a[1005];


void dfs(int src)
{

    visited[src]=true;

    cout<<src<<" ";
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            dfs(x);
        }

    }


}

int main()
{
    faster

    int k,n,e,x;
    cin>>k>>n>>e;

    for(int i=0; i<k; i++)
    {
        cin>>x;
        a[x]=true;
    }


    int u,v;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }



    for(int i=1; i<=n; i++)
    {

    }
    dfs(src);
    cout<<endl;


    for(int i=1; i<=n; i++)
    {
        cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
    }

    return 0;
}

