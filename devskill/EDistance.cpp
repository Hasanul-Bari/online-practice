#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>s;
        if(s[0]=='-')
            cout<<"Case "<<i+1<<": "<<s<<" is not a valid result"<<endl;
        else
             cout<<"Case "<<i+1<<": "<<s<<" is a valid result"<<endl;
    }

    return 0;
}
