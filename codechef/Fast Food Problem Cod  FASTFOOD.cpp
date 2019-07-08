#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        ll sa=0,sb=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sa=sa+a[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            sb=sb+b[i];
        }

        if(sa>sb)
            cout<<sa<<endl;
        else if(sb>sa)
            cout<<sb<<endl;
        else
        {

            for(int i=n-2; i>=0; i--)
            {
                b[i]=b[i]+b[i+1];
                //a[i]=a[i]+a[i+1];


            }

            ll ans=0;
            for(int i=0; i<n; i++)
            {
                //cout<<a[i]<<" "<<b[i]<<endl;

                if(a[i]<=b[i])
                {
                    ans=ans+b[i];
                    break;
                }
                else
                {
                    ans=a[i];
                }
            }

            cout<<ans<<endl;

        }

    }




    return 0;
}
