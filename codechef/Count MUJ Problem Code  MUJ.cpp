#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int x=s.find("MUJ");
        //cout<<x<<endl;
        if(x<0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}
