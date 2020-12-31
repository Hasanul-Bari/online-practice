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
    ull n,m,x;
    int c=1;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        for(int i=0; i<n; i++)
        {
            cin>>x;
        }
        cout<<"Case "<<c<<":"<<endl;
        c++;
        for(int i=0; i<m; i++)
        {
            cin>>x;
            cout<<binomial_coefficient(n,x)<<endl;
        }
    }

}

