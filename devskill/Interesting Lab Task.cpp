#include<bits/stdc++.h>
using  namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int Func(int n)
{
    ret = 0
    for( i = 1; i < n; i++)
    {
        if( gcd(i,n) > 1)
        {
            ret = ret + i
        }
    }
    return ret
}
int main()
{
   int ;
   cin>>a>>b;
   cout<<gcd(a,b)<<endl;
   cout<<(a*b)/gcd(a,b)<<endl;
}

