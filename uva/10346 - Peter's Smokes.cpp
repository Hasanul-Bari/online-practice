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

    ll n,k;

    while(cin>>n>>k)
    {
        ll ans=n;

        while(n>=k)
        {
            ans=ans+(n/k);
            n=(n/k)+(n%k);
        }

        cout<<ans<<endl;
    }




    return 0;
}
