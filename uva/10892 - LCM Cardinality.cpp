#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void primefactorize(ll n)
{
    ll s=1,c;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            c=0;
            while(n%i==0)
            {
                //cout<<i<<" ";
                n=n/i;
                c++;
            }

            //cout<<"c = "<<c<<endl;

            s=s*((2*c)+1);
        }
    }
    if(n>1)
    {
       // cout<<n<<" ";
        s=s*3;
    }


    cout<<(s+1)/2<<endl;




}

int main()
{
    ll n;


    while(cin>>n)
    {
         if(n==0)
            break;

        cout<<n<<" ";
         primefactorize(n);

    }
    return 0;
}

