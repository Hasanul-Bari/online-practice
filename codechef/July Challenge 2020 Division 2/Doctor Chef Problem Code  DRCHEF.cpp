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
        cin>>n>>x;

        int a;

        for(int i=0; i<n; i++)
        {
            cin>>a;
        }

        int c=0;
        while(a>x)
        {
            x=x*2;
            c++;

        }

        cout<<c+n<<endl;



    }




    return 0;
}
