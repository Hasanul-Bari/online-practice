#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,m;
    cin>>n>>m;
    int ans;
    if(m==0)
        cout<<1<<endl;
    else if(n%2==0)
    {
        if(m<n/2)
            ans=m;
        else
            ans=n-m;
        cout<<ans<<endl;
    }
    else
    {
        if(m<=n/2)
            ans=m;
        else
            ans=n-m;
        cout<<ans<<endl;
    }






    return 0;
}
