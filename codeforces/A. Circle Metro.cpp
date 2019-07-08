#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,a,x,b,y;

    cin>>n>>a>>x>>b>>y;

    int c=0;

    while(1)
    {
        a++;
        if(a==n+1)
            a=1;
        b--;
        if(b==0)
            b=n;


        if(a==b)
            c=1;

        //cout<<a<<" "<<b<<endl;
        if(a==x)
            break;
        if(b==y)
            break;




    }

    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;




    return 0;
}
