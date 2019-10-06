#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int adj[103][103];

int main()
{
    //faster

    int u,v,t=1;

    while(1)
    {
        cin>>u>>v;

        if(u==0 && v==0)
            break;



        for(int i=1; i<=100; i++)
        {
            for(int j=1; j<=100; j++)
            {
                if(i==j)
                    adj[i][j]=0;
                else
                    adj[i][j]=1e9;

            }
        }



        map<int,int> m;
        int c=1;

        while(1)
        {

            if(m[u]==0)
            {
                m[u]=c;
                c++;
            }

            if(m[v]==0)
            {
                m[v]=c;
                c++;
            }

            adj[m[u]][m[v]]=1;

            cin>>u>>v;
            if(u==0 && v==0)
            {
                break;
            }

        }
        int n=m.size();

        ///floydWarshall

        int s=0;

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
                        s=s+adj[i][j];

                }
            }
        }


        /*for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cout<<adj[i][j]<<" ";
            cout<<endl;
        }*/


        double ans=double(s)/double(n*(n-1));
        printf("Case %d: average length between pages = %0.3lf clicks\n",t,ans);

        //cout<<"Case "<<t<<": average length between pages = "<<ans<<" clicks"<<endl;
        t++;

    }





    return 0;
}


