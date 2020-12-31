#include<iostream>
#include<cstdio>
using namespace std;

long long hp(long long n)
{
    long long c=1;
    while(n!=1)
    {

        if(n%2!=0)
            n=3*n+1;
        else
            n=n/2;

        c++;

    }
    return c;

}
int main()
{
    long long a,b,max=0;

    while(cin>>a>>b && a!=EOF && b !=EOF)
    {

        max=0;
        if(b>=a)
        {
            for(long long i=a; i<=b; i++)
            {
                long long x=hp(i);
                if(max<x)
                    max=x;
            }
            cout<<a<<" "<<b<<" "<<max<<endl;
        }

        else
        {
            for(long long i=b; i<=a; i++)
            {
                long long x=hp(i);
                if(max<x)
                    max=x;
            }
            cout<<a<<" "<<b<<" "<<max<<endl;
        }

    }

    return 0;
}


