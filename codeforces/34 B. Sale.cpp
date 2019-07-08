#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,m,x;
    cin>>n>>m;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x<0)
        {
            v.push_back(x);
        }
    }

    sort(v.begin(),v.end());

    int ans=0;
    for(int i=0; (i<m && i<v.size()) ; i++)
    {
        ans=ans-v[i];
    }


    cout<<ans<<endl;


    return 0;
}
