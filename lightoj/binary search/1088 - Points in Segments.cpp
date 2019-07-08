#include<bits/stdc++.h>

#define ll long long
#define ull unsignd long long

#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d%d",&x,&y)
#define sf3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sf4(x,y,z,w) scanf("%d%d%d%d",&x,&y,&z,&w)

#define sfll1(x) scanf("%lld",&x)
#define sfll2(x,y) scanf("%lld%lld",&x,&y)
#define sfll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define sfll4(x,y,z,w) scanf("%lld%lld%lld%lld",&x,&y,&z,&w)

#define sfd1(x) scanf("%lf",&x)
#define sfd2(x,y) scanf("%lf%lf",&x,&y)
#define sfd3(x,y,z) scanf("%lf%lf%lf",&x,&y,&z)
#define sfd4(x,y,z,w) scanf("%lf%lf%lf%lf",&x,&y,&z,&w)

#define pf1(x) printf("%d",x)
#define pf2(x,y) printf("%d %d",x,y)
#define pf3(x,y,z) printf("%d %d %d",x,y,z)
#define pf4(x,y,z,w) printf("%d %d %d %d",x,y,z,w)
#define pfll1(x) printf("%lld",x)
#define pfd1(x) printf("%lf",x)

#define nl printf("\n");
#define pf printf
#define sf scanf
using namespace std;

int main()
{

    int n,q,t,h=1;
    sf1(t);
    while(t--)
    {
        sf2(n,q);
        ll a[n];
        for(int i=0; i<n; i++)
            sfll1(a[i]);

        ll x,y,j,k;
        pf("Case %d:\n",h);
        h++;

        for(int i=0; i<q; i++)
        {
            sfll2(x,y);
            j=lower_bound(a,a+n,x)-a;
            k=upper_bound(a,a+n,y)-a;

            //cout<<j<<" "<<k<<endl;
            pfll1(k-j);
            nl
        }

    }



    return 0;
}
