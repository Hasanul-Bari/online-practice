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

    int n;
    cin>>n;

    if(n%2==0)
    {
        cout<<(n/2)+1<<endl;

        for(int i=1; i<=n/2; i++)
            cout<<1<<" "<<i<<endl;

        for(int i=1,j=n/2; i<=n/2; i++)
            cout<<i+1<<" "<<j<<endl;

    }
    else
    {
        cout<<(n/2)+1<<endl;

        for(int i=1; i<=n/2+1; i++)
            cout<<1<<" "<<i<<endl;

        for(int i=1,j=n/2+1; i<=n/2; i++)
            cout<<i+1<<" "<<j<<endl;
    }




    return 0;
}
