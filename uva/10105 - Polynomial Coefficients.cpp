#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fact(ll x)
{
    ll f=1;
    for(int i=1; i<=x; i++)
        f=f*i;

    return f;
}
int main()
{
    ll n,k,a,b;
    while(cin>>n>>k)
    {
        b=1;

        for(int i=0; i<k; i++)
        {
            cin>>a;
            b=b*fact(a);
        }
        cout<<fact(n)/b<<endl;

    }

    return 0;
}
