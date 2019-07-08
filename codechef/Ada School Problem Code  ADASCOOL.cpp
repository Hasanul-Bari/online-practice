#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>m;
        if(m%2==0 || n%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
