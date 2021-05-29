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

    int n,k;
    cin>>n>>k;

    ll x,p=0,c=0;

    for(int i=0; i<n; i++)
    {
        cin>>x;

        ll r=(x+p)%k;
        c=c+(x+p)/k;

        if(r>x)
        {
            c++;
            p=0;
        }
        else
            p=r;



    }

    if(p>0)
        c++;

    cout<<c<<endl;




    return 0;
}
