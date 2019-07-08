#include<bits/stdc++.h>
#define ll long long
using namespace std;


void dec_to_ternary(ll n)
{
    if(n==0)
        cout<<0;

    else
    {

        vector<int> a;
        ll x;

        while(n>0)
        {
            x=n%3;
            a.push_back(x);
            n=n/3;
        }


        for(int i=a.size()-1; i>=0; i--)
            cout<<a[i];
    }

    cout<<endl;
}


int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    ll n;
    while(cin>>n && n>=0)
        dec_to_ternary(n);

    return 0;
}
