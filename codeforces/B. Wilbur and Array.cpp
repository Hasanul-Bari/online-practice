#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    ll x;
    cin>>x;

    ll ans=abs(x),temp=x;

    for(int i=1; i<n; i++)
    {
        cin>>x;
        ans=ans+abs(temp-x);
        temp=x;

    }

    cout<<ans<<endl;


    return 0;
}
