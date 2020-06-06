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

    int t,n,q;

    cin>>t;

    while(t--)
    {
        cin>>n>>q;

        ll s=0,x,y,tmp=0;

        while(q--)
        {
            cin>>x>>y;

            s=s+abs(x-y)+abs(tmp-x);

            tmp=y;

        }

        cout<<s<<endl;
    }




    return 0;
}
