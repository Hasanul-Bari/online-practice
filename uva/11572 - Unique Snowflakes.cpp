#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int t;
    cin>>t;
    ll x,n,ans,max;
    while(t--)
    {
        map<ll,ll> m;
        cin>>n;
        ans=0,max=0;
        while(n--)
        {
            cin>>x;
            m[x]++;
            if(m[x]==1)
            {
                ans++;
            }
            else
            {
                if(max<ans)
                    max=ans;

                m.clear();
                ans=1;
                m[x]++;
            }

            //cout<<ans<<endl;
        }
        if(max<ans)
            max=ans;

        cout<<max<<endl;

    }

    return 0;
}
