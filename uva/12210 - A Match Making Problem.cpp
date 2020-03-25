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

    int b,s,k=1;

    while(cin>>b>>s)
    {
        if(b==0 && s==0)
            break;


        int x,mn=61;

        for(int i=0; i<b; i++)
        {
            cin>>x;
            if(mn>x)
                mn=x;
        }

        for(int i=0; i<s; i++)
            cin>>x;


        if(b<=s)
            cout<<"Case "<<k<<": "<<0<<endl;
        else
        {

            cout<<"Case "<<k<<": "<<b-s<<" "<<mn<<endl;
        }
        k++;
    }




    return 0;
}
