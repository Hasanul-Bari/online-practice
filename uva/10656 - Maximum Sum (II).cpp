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

    int n,x;

    while(cin>>n)
    {
        if(n==0)
            break;

        bool hp=false;
        int c=0,nn=n;

        while(n--)
        {
            cin>>x;

            if(x!=0)
            {
                if(hp==false)
                    cout<<x;
                else
                    cout<<" "<<x;

                hp=true;

            }
            else
                c++;

            if(c==nn)
                cout<<0;




        }
        cout<<endl;



    }




    return 0;
}





