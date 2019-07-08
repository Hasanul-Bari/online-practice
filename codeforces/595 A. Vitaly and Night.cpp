#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,m;
    cin>>n>>m;
    bool x,y;
    int c=0;
    for(int i=1; i<=n; i++)
    {
        for(int i=1; i<=m; i++)
        {
            cin>>x>>y;
            if(x==1 || y==1)
                c++;

        }
    }
    cout<<c<<endl;

    return 0;
}
