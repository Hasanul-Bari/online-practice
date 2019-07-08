#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int wt[102];
int p[102];

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


            if(k[i][w]>2000)
                k[i][w]=k[i][w]-200;

        }
    }


    return k[n][c];
}


int main()
{
    faster;

    int n,c;


    while(cin>>c>>n)
    {


        for(int i=1; i<=n; i++)
            cin>>wt[i]>>p[i];


        cout<<knapsack(c,n)<<endl;

    }




    return 0;
}

