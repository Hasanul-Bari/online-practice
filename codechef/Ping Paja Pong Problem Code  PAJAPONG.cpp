#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
         ll x,y,k;
         cin>>x>>y>>k;
         ll m=x+y;

         ll g=m/k;


         if(g%2==0)
            cout<<"Chef"<<endl;
         else
            cout<<"Paja"<<endl;



    }





    return 0;
}
