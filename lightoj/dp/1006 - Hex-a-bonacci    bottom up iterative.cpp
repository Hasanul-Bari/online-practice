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

ll a,b,c,d,e,f;

ll dp[10005];
ll fn(ll n)
{
    dp[0]=a;
    dp[1]=b;
    dp[2]=c;
    dp[3]=d;
    dp[4]=e;
    dp[5]=f;

    for(int i=6; i<=n; i++)
        dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%10000007;



    return dp[n];

}


int main()
{
    int t,i=1;
    sf1(t);
    while(t--)
    {


        ll n;

        sfll4(a,b,c,d);
        sfll3(e,f,n);

        for(int i=6; i<=n; i++)
            dp[i]=-1;


        pf("Case %d: ",i);
        i++;
        pfll1(fn(n)%10000007);
        nl

    }



    return 0;
}
