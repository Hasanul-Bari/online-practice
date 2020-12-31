#include<bits/stdc++.h>
using namespace std;

double binomial_coefficient(double n, double k)
{
    double ans=1;
    if(k>n-k)
        k=n-k;

    for(double i=0; i<k; i++)
    {
        ans=ans+log10(n-i);
        ans=ans-log10(i+1);
    }

    return ans;
}

int main()
{
    double n,k;
    while(cin>>n>>k)
    {
        double x=binomial_coefficient(n,k);
        long long y=floor(x);
        cout<<y<<endl;
    }

    return 0;

}
