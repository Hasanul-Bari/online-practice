#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {


        double d,v,u;
        cin>>d>>v>>u;

        double a=acos(-v/u);

        double x=abs( (d/u)- (d/(u*sin(a))) );

        if( u==0 || v==0 || v>=u)
            cout<<"Case "<<i<<": "<<"can't determine"<<endl;

        else
            printf("Case %d: %.3lf\n",i,x);
    }
    return 0;
}
