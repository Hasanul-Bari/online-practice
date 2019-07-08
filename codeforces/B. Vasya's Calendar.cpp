#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int d,n;
    cin>>d>>n;
    int ans=0,x;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(i!=n)
            ans=ans+(d-x);
    }
    cout<<ans<<endl;




    return 0;
}
