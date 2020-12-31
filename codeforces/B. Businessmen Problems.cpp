#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    map<int,int> mm;
    int n,m;
    cin>>n;

    int x,y;
    ll s=0;
    for(int i=0; i<n;  i++)
    {
        cin>>x>>y;
        mm[x]=y;
        s=s+y;

    }

    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        if(mm[x]<y)
        {
            s=s-mm[x];
            s=s+y;
        }

    }

    cout<<s<<endl;


    return 0;
}
