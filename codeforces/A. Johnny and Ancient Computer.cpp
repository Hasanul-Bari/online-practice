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

    ll t,a,b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        if(a>b)
            swap(a,b);


        if(b%a==0)
        {
            //cout<<b/a<<endl;

            ll c=b/a;

            ll ans=c/8;

            c=c%8;

            ans=ans+(c/4);
            c=c%4;

            ans=ans+(c/2);
            c=c%2;

            if(c==0)
                cout<<ans<<endl;
            else
                cout<<-1<<endl;
        }
        else
            cout<<-1<<endl;






    }




    return 0;
}
