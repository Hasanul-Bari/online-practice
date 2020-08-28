#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int sumofdigits(int n)
{
    int  s=0;

    while(n>0)
    {
        s=s+(n%10);
        n=n/10;
    }

    return s;

}


int main()
{
    faster

    int t,n,a,b;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int c=0,m=0;

        while(n--)
        {
            cin>>a>>b;

            if(sumofdigits(a)>sumofdigits(b))
                c++;
            else if(sumofdigits(a)<sumofdigits(b))
                m++;
            else
                c++,m++;


        }

        if(c>m)
            cout<<0<<" "<<c<<endl;
        else if(c<m)
            cout<<1<<" "<<m<<endl;
        else
            cout<<2<<" "<<c<<endl;
    }




    return 0;
}
