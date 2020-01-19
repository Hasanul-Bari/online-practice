#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int t,n,p,s;
    cin>>t;

    int a[9];
    for(int i=1; i<=8; i++)
            a[i]=0;

    while(t--)
    {
        cin>>n;

        while(n--)
        {
            cin>>p>>s;
            if(p<=8)
            {
                if(a[p]<s)
                a[p]=s;
            }

        }

        ll ss=0;

        for(int i=1; i<=8; i++)
        {
            ss=ss+a[i];
            a[i]=0;
        }

        cout<<ss<<endl;

    }




    return 0;
}
