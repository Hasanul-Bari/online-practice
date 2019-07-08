#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;



int main()
{
    faster

    int n;
    cin>>n;

    int ans;
    int a[7]={0};
    string s;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        for(int j=0; j<7; j++)
        {
            if(s[j]=='1')
                a[j]++;
        }
    }

    for(int i=0; i<7; i++)
    {
        if(i==0)
            ans=a[i];
        else if(a[i]>ans)
            ans=a[i];

    }

    cout<<ans<<endl;





    return 0;
}
