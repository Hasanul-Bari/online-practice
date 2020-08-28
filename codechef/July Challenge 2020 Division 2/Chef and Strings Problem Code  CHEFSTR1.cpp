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

    int t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int tmp=-1;
        ll s=0;

        while(n--)
        {
            cin>>x;

            if(tmp!=-1)
            {
                s=s+abs(tmp-x)-1;
            }

            tmp=x;
        }

        cout<<s<<endl;
    }




    return 0;
}
