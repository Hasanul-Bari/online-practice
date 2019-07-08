#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int a[5004];

int main()
{
    faster

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<=n; i++)
    {
        //cout<<a[a[a[i]]]<<endl;
        if( a[a[a[i]]]==i)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;


}
