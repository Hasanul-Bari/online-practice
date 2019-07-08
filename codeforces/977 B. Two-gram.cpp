#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,max=0;
    string s,h,ans;
    cin>>n>>s;

    map<string,int> m;

    for(int i=1; i<n; i++)
    {
        h=h+s[i-1]+s[i];
        //cout<<h<<endl;
        m[h]++;
        if(m[h]>max)
        {
            max=m[h];
            ans=h;
        }
        h="";
    }

    cout<<ans<<endl;




    return 0;
}
