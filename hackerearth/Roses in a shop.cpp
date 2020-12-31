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


    ll fir[n],en[n];

    fir[0]=1,en[n-1]=1;

    for(int i=1; i<n; i++)
    {
        if(a[i]>a[i-1])
            fir[i]=fir[i-1]+1;
        else
            fir[i] = 1;
    }

    for(int i=n-2; i>=0; i--)
    {
        if(a[i]<a[i+1])
            en[i]=en[i+1]+1;
        else
            en[i]=1;
    }


    ll ans=0,c=1;


    for(int i=1; i<n; i++)
    {
        if(a[i]>a[i-1])
            c++;
        else
            c=1;
        ans = max(ans, c);
    }


    for(int i=1; i<=n-2; i++)
    {
        if(a[i-1]<a[i+1])
            ans = max(fir[i-1]+en[i+1],ans);
    }

    cout<<ans<<endl;






    return 0;
}
