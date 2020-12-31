#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int next[100][100];



int main()
{
    faster

    int n;
    while(cin>>n)
    {

        int adj[n][n];
        string c;

        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                cin>>c;

                if(c=="x")
                {
                    adj[i][j]=1e9;
                    adj[j][i]=1e9;
                }

                else
                {
                    stringstream ss(c);
                    ss>>adj[i][j];
                    adj[j][i]=adj[i][j];

                }

            }
        }

        for(int i=0; i<n; i++)
            adj[i][i]=0;


        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<adj[i][j]<<" ";
            cout<<endl;
        }*/



        ///floydWarshall

        int max;

        for(int k=0; k<n; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(adj[i][j]>adj[i][k]+adj[k][j])
                    {
                        adj[i][j]=adj[i][k]+adj[k][j];
                    }

                    if(k==n-1 && i==0)
                    {
                        if(j==0)
                        {
                            max=adj[i][j];
                        }
                        else
                        {
                            if(max<adj[i][j])
                                max=adj[i][j];
                        }
                    }

                }
            }
        }

        cout<<max<<endl;


        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<adj[i][j]<<" ";
            cout<<endl;
        }*/

    }






    return 0;
}

