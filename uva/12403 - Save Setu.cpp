#include<iostream>
using namespace std;

int main()
{
    int t;
    long x=0,y;
    cin>>t;
    string s;
    for(int i=1; i<=t; i++)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>y;
            x=x+y;
        }
        else
            cout<<x<<endl;
    }
    return 0;
}
