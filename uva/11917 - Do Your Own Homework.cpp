#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,d,t;
    cin>>t;

    string s;
    for(int j=0; j<t; j++)
    {

    cin>>n;
    map<string,int> m;

    for(int i=0; i<n; i++)
    {
        cin>>s>>d;
        m[s]=d;
    }
    cin>>d;
    cin>>s;

    cout<<"Case "<<j+1<<": ";
    if(m[s]==0 || m[s]>d+5)
        cout<<"Do your own homework!"<<endl;
    else if(m[s]>d && m[s]<=d+5)
        cout<<"Late"<<endl;
    else if(m[s]<=d)
        cout<<"Yesss"<<endl;


    }
    return 0;



}
