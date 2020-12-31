#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

bool visited[10005];     // default initialize to false/0


void dfs(vector<int> adj[],int src)
{

    visited[src]=true;

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            dfs(adj,x);
        }

    }

}

int main()
{
    faster

    int n,e,t,l;
    cin>>t;
    while(t--)
    {

        cin>>n>>e>>l;

        vector<int> adj[n+1];

        int u,v;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
        }

        /*for(int i=1; i<=n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                cout<<i<<" "<<adj[i][j]<<" ";
            }
            cout<<endl;
        }*/

        int src;
        while(l--)
        {
            cin>>src;
            if(visited[src]==false)
                dfs(adj,src);
        }
        int c=0;

        for(int i=1; i<=n; i++)
        {
            //cout<<i<<" "<<visited[i]<<endl;
            if(visited[i]==true)
            {
                c++;
                visited[i]=false;
            }
        }

        cout<<c<<endl;



    }
    return 0;
}


