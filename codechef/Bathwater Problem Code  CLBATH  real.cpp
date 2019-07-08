#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long v1,v2,v3,t1,t2,t3,x;
    cin>>t;
    while(t--)
    {
        cin>>v1>>t1>>v2>>t2>>v3>>t3;
        x=((v1*t1)+(v2*t2))/(v1+v2);
        //cout<<x<<endl;

        if(v3<=v1+v2 && x==t3)
            cout<<"YES"<<endl;
        else if(v3<=v1 && t1==t3)
            cout<<"YES"<<endl;
        else if(v3<=v2 && t2==t3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
    return 0;
}

