#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    string l1="`1234567890-=";
    string l2="QWERTYUIOP[]";
    string l3="ASDFGHJKL;'";
    string l4="ZXCVBNM,./";

    map<char,char> m;
    for(int i=1; i<l1.length(); i++)
        m[l1[i]]=l1[i-1];


    for(int i=1; i<l2.length(); i++)
        m[l2[i]]=l2[i-1];

    for(int i=1; i<l3.length(); i++)
        m[l3[i]]=l3[i-1];

    for(int i=1; i<l4.length(); i++)
        m[l4[i]]=l4[i-1];

    m[' ']=' ';
    char c=92;
    m[c]=']';


    /*map<char,char> :: iterator it;

    for(it=m.begin(); it!=m.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;*/




    string s;
    while(getline(cin,s))
    {
        for(int i=0; i<s.length(); i++)
        {
                cout<<m[s[i]];
        }
        cout<<endl;
    }

    return 0;






}
