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



    ll t,n,k,s;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        ll d=k/n;



       cout<<d<<endl;

        while(d!=0)
        {


            k=k+d;


            d=d/n;

            cout<<k<<" k"<<endl;

            if( k%n==0)
                k++;



        }



        cout<<k<<endl;


    }




    return 0;
}
