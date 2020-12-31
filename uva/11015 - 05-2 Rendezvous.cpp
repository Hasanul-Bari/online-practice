#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;


int main()
{
    faster

    int n,e,t=1;
    while(1)
    {
        cin>>n>>e;
        if(n==0 && e==0)
            break;


        string s[n];

        for(int i=0; i<n; i++)
            cin>>s[i];



        int adj[n+1][n+1];

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i==j)
                    adj[i][j]=0;
                else
                    adj[i][j]=1e9;

            }
        }

        int u,v,cost;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v>>cost;
            adj[u][v]=cost;
            adj[v][u]=cost;


        }


        ///floydWarshall

        int ans=0,sum=0,mn=1e9;

        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(adj[i][j]>adj[i][k]+adj[k][j])
                    {
                        adj[i][j]=adj[i][k]+adj[k][j];
                    }

                    if(k==n)
                    {
                        sum=sum+adj[i][j];
                    }

                }
                if(k==n)
                {
                    if(sum<mn)
                    {
                        mn=sum;
                        ans=i;
                    }

                    sum=0;
                }
            }
        }

        cout<<"Case #"<<t<<" : "<<s[ans-1]<<endl;
        t++;




        /*for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cout<<adj[i][j]<<" ";
            cout<<endl;
        }*/

    }




    return 0;
}


