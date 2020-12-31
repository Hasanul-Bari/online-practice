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

    int a[m],x,ans;
    for(int i=0; i<m; i++)
        cin>>a[i];

    sort(a,a+m);

    for(int i=0; i<=m-n; i++)
    {
        x=a[i+n-1]-a[i];
        if(i==0)
            ans=x;

        else if(ans>x)
            ans=x;
    }

    cout<<ans<<endl;

    return 0;
}
