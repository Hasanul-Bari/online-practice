#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}


ll divisorcount(ll n)
{
    ll divisor=1;
    for(int i=2; i*i<=n; i++)
    {

        if(n%i==0)
        {
            ll c=0;
            while(n%i==0)
            {
                n=n/i;
                c++;
            }

            divisor=divisor*(c+1);
        }

    }
    if(n>1)
        divisor=divisor*2;


    return divisor;
}



int main()
{
    faster
    ll a,b;
    cin>>a>>b;

    ll x=gcd(a,b);
    //cout<<x<<endl;

    cout<<divisorcount(x)<<endl;




    return 0;
}
