#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull binomial_coefficient(ull n, ull k)
{
    ull ans=1;
    if(k>n-k)
        k=n-k;

    for(ull i=0; i<k; i++)
    {
        ans=ans*(n-i);
        ans=ans/(i+1);
    }

    return ans;
}

int main()
{
    ull n,k,x,s;
    while(cin>>n>>k)
    {
        ull a[k],ans=1;
        for(int i=0; i<k; i++)
        {
            cin>>a[i];
        }
        s=a[0];
        for(int i=1; i<k; i++)
        {
            s=s+a[i];
            ans=ans*binomial_coefficient(s,a[i]);
        }

        cout<<ans<<endl;
    }

    return 0;

}


