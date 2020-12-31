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


int a[1002],b[1002];

bool compare(int x,int y)
{

    if(a[x]<a[y])
        return true;

    else if(a[x]==a[y])
    {
        if(x>y)
            return true;
        else
            return false;
    }
    else
        return false;
}

int divisor(int n)
{
    int d=0;
    for(int i=1; i*i<=n; i++)
    {
        if(i*i==n)
        {
            d++;
        }
        else if(n%i==0)
        {
            d=d+2;
        }

    }
    //cout<<"Divisors "<<n<<" = "<<d<<endl;
    return d;
}

int main()
{


    for(int i=1; i<=1000; i++)
    {
        a[i]=divisor(i);
        b[i]=i;
    }

    /*for(int i=1; i<=1000; i++)
        cout<<a[i]<<" "<<b[i]<<endl;;
    cout<<endl;*/

    sort(b+1,b+1001,compare);

    /*for(int i=1; i<=1000; i++)
        cout<<b[i]<<endl;
    cout<<endl;*/





    int t,n,i=1;
    sf1(t);
    while(t--)
    {
        sf1(n);
        pf("Case %d: %d",i,b[n]);
        nl
        i++;
    }

    return 0;
}
