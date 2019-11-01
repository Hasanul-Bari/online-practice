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

    int n;
    cin>>n;

    int mn=n+1;

    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            int x=i+(n/i);

            if(x<mn)
            mn=x;

        }
    }

    cout<<2*mn<<endl;

    return 0;
}
