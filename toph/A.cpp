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

    int t,n;
    //cin>>t;

    //while(t--)
    {
        cin>>n;

        bool f=false;

        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                f=true;
                break;
            }
        }

        if(f==true)
            cout<<"Yes"<<endl;
        else
                        cout<<"No"<<endl;


    }




    return 0;
}
