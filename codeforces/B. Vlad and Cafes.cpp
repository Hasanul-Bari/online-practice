#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,x;
    cin>>n;

    map<int,int> m;

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        m[x]=i;
    }

    map<int,int> :: iterator it;

    int c=n+1,ans;

    for(it=m.begin(); it!=m.end(); it++)
    {
        //cout<<it->first<<" "<<it->second<<endl;
        if(c>it->second)
        {
            c=it->second;
            ans=it->first;

        }
    }

    cout<<ans<<endl;




    return 0;
}
