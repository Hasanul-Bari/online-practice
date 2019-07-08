#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,t,s,d;
    cin>>n>>t;

    int ans,min,tmin,tans;

    for(int i=1; i<=n; i++)
    {
        cin>>s>>d;

        if(i==1)
        {
            if(s>=t)
            {
                min=s-t;
                ans=i;
            }
            else
            {
                int x=t-s;
                x=x%d;
                if(x==0)
                    x=d;

                min=d-x;
                ans=i;
            }
        }
        else
        {
            if(s>=t)
            {
                tmin=s-t;
                tans=i;
            }
            else
            {
                int x=t-s;
                x=x%d;
                if(x==0)
                    x=d;

                tmin=d-x;
                tans=1;
            }

            if(tmin<min)
            {
                min=tmin;
                ans=i;
            }

        }

    }
    cout<<ans<<endl;

    return 0;
}
