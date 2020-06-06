#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


ll bigmod(ll a,ll b, ll m )
{
    ll x;

    if(b==0)
        return 1;

    x=bigmod(a,b/2,m);
    x=(x*x)%m;

    if(b%2!=0)
        x=(x*a)%m;
    //cout<<a<<" "<<b<<" "<<m<<endl;
    //cout<<x<<" ~ "<<endl;
    return x;
}



int main()
{
    faster

    ll t,n,a;

    cin>>t;

    while(t--)
    {
        cin>>n>>a;

        ll s=0,tmp=1;

        for(ll i=1,j=1; i<=n; i++,j=j+2)
        {
            ll x=bigmod(a,j,1000000007);

            a=(x*a)%1000000007;

            s=(s+x)%1000000007;




        }

        cout<<s<<endl;
    }




    return 0;
}
