#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    string s;
    int k;
    int a[26],max=-1;
    cin>>s>>k;
    for(int i=0; i<26; i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }

    ll ans=0;
    int n=s.length();
    for(int i=0; i<n; i++)
    {
        ans=ans+(a[s[i]-97]*(i+1));
    }
    //cout<<ans<<endl;

    for(int i=n+1; i<=n+k; i++)
        ans=ans+(i*max);

    cout<<ans<<endl;

    return 0;
}
