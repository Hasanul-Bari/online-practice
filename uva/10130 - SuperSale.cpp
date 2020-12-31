#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int wt[1002];
int p[1002];

int knapsack(int c, int n)
{
    int k[n+1][c+1];

    for(int i=0; i<=n; i++)
    {
        for(int w=0; w<=c; w++)
        {

            if(i==0 || w==0)
                k[i][w]=0;

            else if(wt[i]<=w)
                k[i][w]=max( k[i-1][w], p[i]+k[i-1][w-wt[i]] );
            else
                k[i][w]=k[i-1][w];


        }
    }


    return k[n][c];
}


int main()
{
    faster;

    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>p[i]>>wt[i];

        int g,c,s=0;
        cin>>g;
        while(g--)
        {
            cin>>c;
            s=s+knapsack(c,n);
        }

        cout<<s<<endl;

    }


    return 0;
}
