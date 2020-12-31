#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;


bool visited[106];     // default initialize to false/0

void dfs(vector<int> adj[], int src)
{

    visited[src]=true;

    //cout<<src<<" ";
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

    int n;
    while(cin>>n && n!=0)
    {

        vector<int> adj[n+1];

        int u,v;
        while(1)
        {
            cin>>u;
            if(u==0)
                break;

            while(1)
            {
                cin>>v;
                if(v==0)
                    break;
                adj[u].push_back(v);
            }
        }

        /*for(int i=1; i<=n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                cout<<i<<" ->"<<adj[i][j]<<" ";
            }
            cout<<endl;
        }*/

        int src,t;
        cin>>t;
        for(int k=0; k<t; k++)
        {
            cin>>src;
            for(int i=1; i<=n; i++)
                visited[i]=false;


            for(int j=0; j<adj[src].size(); j++)
            {
                if(visited[adj[src][j]]==false)
                {
                    dfs(adj,adj[src][j]);
                }
            }

            vector<int> v;

            for(int i=1; i<=n; i++)
            {
                //cout<<i<<" "<<visited[i]<<endl;
                if(visited[i]==false)
                {
                    v.push_back(i);
                }

            }

            int x=v.size();
            if(x==0)
                cout<<x<<endl;
            else
            {

                cout<<x<<" ";
                for(int i=0; i<x-1; i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<v[x-1]<<endl;
            }

        }

    }

    return 0;
}

