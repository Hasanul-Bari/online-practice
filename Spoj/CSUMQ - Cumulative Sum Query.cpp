#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n,q,x,y;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(i!=0)
            a[i]=a[i]+a[i-1];
    }

    cin>>q;
    while(q--)
    {
        cin>>x>>y;

        if(x==0)
            cout<<a[y]<<endl;
        else
            cout<<a[y]-a[x-1]<<endl;
    }


    return 0;
}
