#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int ans=1;

    if(n-a==b || n-a==c || n-c==b)
    {
        ans++;
    }

    cout<<ans<<endl;
    return 0;

}
