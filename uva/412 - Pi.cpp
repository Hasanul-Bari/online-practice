#include<bits/stdc++.h>
#define ll  long long
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}
ll binomial_coefficient(ll n, ll k)
{
    ll ans=1;
    if(k>n-k)
        k=n-k;

    for(ll i=0; i<k; i++)
    {
        ans=ans*(n-i);
        ans=ans/(i+1);
    }

    return ans;
}
int main()
{
    ll n;
    while(cin>>n && n!=0)
    {


        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int c=0,hp=0;
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(gcd(a[j],a[k])==1)
                {
                    c++;
                }
            }
        }
        if(c==0)
            cout<<"No estimate for this data set."<<endl;
        else
        {
            long long y=binomial_coefficient(n,2);
            //cout<<y<<endl;
            int m=c/2;
            //cout<<m<<endl;
            double x=sqrt((double)(6*y)/m);
            printf("%.6lf\n",x);
        }
    }
    return 0;

}
