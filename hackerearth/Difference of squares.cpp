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


    int t,l,r;

    cin>>t;

    while(t--)
    {
        cin>>l>>r;

        int c=0,x=l;

        while(x%4!=2)
        {
            x++;
            c++;

            if(x==r+1)
                break;
        }

        //cout<<c<<endl;

        if(x==r+1)
            cout<<c<<endl;
        else
        {
            x=r-x;


            int z=x/4;

            //cout<<x<<" ** "<<z<<endl;

            cout<<c+(x-z)<<endl;
        }





    }




    return 0;
}
