#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n,ans;
    cin>>n;
    ans=n;

    for(int i=1; i<n; i++)
    {
        ans=ans+(i*(n-i));
    }

    cout<<ans<<endl;

    return 0;
}
