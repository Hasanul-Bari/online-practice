#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long a,long long b, long long m )
{
    long long x;

    if(b==0)
        return 1;

    x=bigmod(a,b/2,m);
    x=(x*x)%m;

    if(b%2!=0)
        x=(x*a)%m;
    return x;
}


int main()
{
    long long a,b,m,x,y;
    cin>>x;
    for(long long i=0; i<x; i++)
    {
        cin>>a>>b>>m;
        cout<<bigmod(a,b,m)<<endl;
    }
    cin>>y;

    return 0;

}

