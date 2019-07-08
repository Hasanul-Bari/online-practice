#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        string s;
        cin>>s;
        bool c=true;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='r')
            {
                c=false;
                break;
            }
        }
        if(c==true)
            cout<<"Vely easy"<<endl;
        else
            cout<<"Not vely easy"<<endl;

    }

    return 0;
}

