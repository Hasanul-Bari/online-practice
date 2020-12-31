#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int main()
{
    int s;
    cin>>s;
    for(int j=1; j<=s; j++)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++)
            cin>>a[i];

        long long x=1,y=a[0];
        for( long long i=1; i<n; i++)
        {
             long long temp=y;
            y=y*a[i];
            x=((y/temp)*x)+(y/a[i]);

        }
        //cout<<x<<" "<<y<<endl;
        y=y*n;

        while(gcd(x,y)!=1)
        {
            long long m=gcd(x,y);
            x=x/m;
            y=y/m;
        }
        cout<<"Case "<<j<<": "<<y<<"/"<<x<<endl;

    }
    return 0;


}
