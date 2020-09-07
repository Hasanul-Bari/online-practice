#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int dp[n],mn;

    dp[0]=0;

    for(int i=1; i<n; i++)
    {

        if(i==1)
            dp[i]=abs(a[i]-a[i-1])+dp[i-1];
        else
            dp[i]=min(abs(a[i]-a[i-1])+dp[i-1],abs(a[i]-a[i-2])+dp[i-2]);

    }

    /*for(int i=0; i<n; i++)
    {
        cout<<dp[i]<<endl;
    }*/

    cout<<dp[n-1]<<endl;




    return 0;
}
