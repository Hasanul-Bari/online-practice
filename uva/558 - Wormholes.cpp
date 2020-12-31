#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;



bool bellmenford(vector<int> adj[],vector<int> w[],int n,ll d[])
{



    for(int i=1; i<n; i++)
    {
        for(int u=0; u<n; u++)
        {
            for(int j=0; j<adj[u].size(); j++)
            {
                int v=adj[u][j];

                if(d[u]+w[u][j]<d[v])
                {
                    d[v]=d[u]+w[u][j];
                }
            }
        }
    }


    for(int u=0; u<n; u++)
    {
        for(int j=0; j<adj[u].size(); j++)
        {
            int v=adj[u][j];

            if(d[u]+w[u][j]<d[v])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    faster

    int t;
    cin>>t;
    while(t--)
    {



        int n,e;
        cin>>n>>e;
        vector <int> adj[n];
        vector <int> w[n];

        int u,v,z;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v>>z;
            adj[u].push_back(v);
            //adj[v].push_back(u);
            w[u].push_back(z);
            //w[v].push_back(z);
        }

        ll d[n];
        for(int i=0; i<n; i++)
        {
            d[i]=1e18;
        }

        int src=1;
        //cin>>src;

        d[src]=0;

        if(bellmenford(adj,w,n,d)==true)
        {
            cout<<"not possible"<<endl;
        }
        else
            cout<<"possible"<<endl;


    }
    return 0;
}




