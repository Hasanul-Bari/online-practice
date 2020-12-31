#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster
    ll t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        ll m=x,n=y,p=z;
        ll ans=0,ans2=0;


        ans=min(x,min(y,z));
        x=x-ans;
        y=y-ans;
        z=z-ans;

        ans=ans+((x/3)+(y/3)+(z/3));



        ans2=((m/3)+(n/3)+(p/3));

        m=m%3;
        n=n%3;
        p=p%3;

        ans2=ans2+min(m,(min(n,p)));

        //cout<<ans<<" "<<ans2<<endl;

        cout<<max(ans,ans2)<<endl;

    }




    return 0;
}
