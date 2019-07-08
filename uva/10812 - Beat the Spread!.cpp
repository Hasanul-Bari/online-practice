#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,s,d,x,y;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>s>>d;
        x=(s+d)/2;
        y=s-x;
        if(x<y)
            swap(x,y);
        if(x+y==s && x-y==d && x>=0 && y>=0)
            cout<<x<<" "<<y<<endl;
        else
            cout<<"impossible"<<endl;


    }

    return 0;
}
