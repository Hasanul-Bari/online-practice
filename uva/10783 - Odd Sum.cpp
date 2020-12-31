#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,s;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        s=0;
        cin>>a>>b;
        if(a%2==0)
        {
            for(int j=a+1; j<=b; j=j+2)
                s=s+j;

        }
        else
        {
            for(int j=a; j<=b; j=j+2)
                s=s+j;
        }
       cout<<"Case "<<i<<": "<<s<<endl;
    }


    return 0;
}

