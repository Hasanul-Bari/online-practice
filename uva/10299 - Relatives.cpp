#include<bits/stdc++.h>
using namespace std;

long long phi(long long n)
{
    if(n==1)
        return 0;

    long long ans=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }

            ans=ans-(ans/i);
        }
    }
    if(n>1)
        ans=ans-(ans/n);

    return ans;
}

int main()
{
    long long n;
    while(cin>>n && n!=0)
        cout<<phi(n)<<endl;

    return 0;
}

