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
    int t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int z=0,tw=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==0)
                z++;
            else if(x==2)
                tw++;
        }
        if(z>0)
            z--;
        if(tw>0)
            tw--;


        ll ans=(z*(z+1))/2;

        ans=ans+((tw*(tw+1))/2);

        cout<<ans<<endl;
    }




    return 0;
}
