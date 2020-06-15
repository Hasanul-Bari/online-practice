#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


ll sum(ll n,ll m)
{
    if (n == 0)
        return 0;
    if (n%2== 1)
    {
        ll nn=(n+1)/2;
        ll z=((nn%m)*(nn%m))%m;
        return  (z%m + (sum(n/2,m))%m)%m;
    }
    else
    {
        ll nn=n/2;
        ll z=((nn%m)*(nn%m))%m;
        return (z%m + (sum(n/2,m))%m)%m;
    }
}



int main()
{
    faster



    ll n,m,t;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        cout<<sum(n,m)<<endl;
    }





    return 0;
}
