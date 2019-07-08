#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;

    int x=min(k2,min(k5,k6));
    ll ans=256*x;

    k2=k2-x;
    if(k2<0)
        k2=0;
    ans=ans+(min(k2,k3)*32);

    cout<<ans<<endl;


    return 0;
}
