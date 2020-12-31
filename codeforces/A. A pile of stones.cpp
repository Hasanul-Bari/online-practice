#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    string s;
    cin>>n>>s;

    int ans=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='-' && ans!=0)
            ans--;
        if(s[i]=='+')
            ans++;
    }
    cout<<ans<<endl;




    return 0;
}
