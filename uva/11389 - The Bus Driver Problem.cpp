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

    int n,d,r;
    while(cin>>n>>d>>r)
    {


        if(n==0 && d==0 && r==0)
            break;

        int a[n],b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
            cin>>b[i];


        sort(a,a+n);
        sort(b,b+n);

        ll s=0;
        for(int i=0,j=n-1; i<n; i++,j--)
        {
            if(a[i]+b[j]>d)
            {
                s=s+((a[i]+b[j])-d)*r;
            }
        }

        cout<<s<<endl;
    }








    return 0;
}
