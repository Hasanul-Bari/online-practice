#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


int hexsum(ll n)
{
    int s=0;

    while(n/16>=16)
    {
        //cout<<n%16<<" ** "<<endl;
        s=s+(n%16);
        n=n/16;
    }

    s=s+(n/16);
    s=s+(n%16);

    return s;
}

int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}



int main()
{
    faster

    /*for(ll i=1; i<=100000; i++)
    {
        cout<<i<<" -> "<<hexsum(i)<<endl;
    }*/

    //cout<<hexsum(27)<<endl;




    int t,l,r;


    cin>>t;

    while(t--)
    {
        cin>>l>>r;

        int c=0;

        for(int i=l; i<=r; i++)
        {
            int z=hexsum(i);

            if(gcd(i,z)>1)
                c++;


        }

        cout<<c<<endl;
    }




    return 0;
}
