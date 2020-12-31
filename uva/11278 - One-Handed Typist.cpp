#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<char,char> m1,m2;

    string q,d;
    q="`1234567890-=";
    d="`123qjlmfp/[]";
    //cout<<q.length()<<" "<<d.length()<<endl;

    for(int i=0; i<q.length(); i++)
        m1[q[i]]=d[i];

    q="qwertyuiop[]";
    d="456.orsuyb;=";
    //cout<<q.length()<<" "<<d.length()<<endl;

    for(int i=0; i<q.length(); i++)
        m1[q[i]]=d[i];

    q="asdfghjkl;'";
    d="789aehtdck-";
    //cout<<q.length()<<" "<<d.length()<<endl;

    for(int i=0; i<q.length(); i++)
        m1[q[i]]=d[i];



    q="zxcvbnm,./";
    d="0zx,inwvg'";
    //cout<<q.length()<<" "<<d.length()<<endl;

    for(int i=0; i<q.length(); i++)
        m1[q[i]]=d[i];



    q="~!@#$%^&*()_+";
    d="~!@#QJLMFP?{}";
    //cout<<q.length()<<" "<<d.length()<<endl;

    for(int i=0; i<q.length(); i++)
        m1[q[i]]=d[i];

    q="QWERTYUIOP{}|";
    d="$%^>ORSUYB:+|";
    //cout<<q.length()<<" "<<d.length()<<endl;

    for(int i=0; i<q.length(); i++)
        m1[q[i]]=d[i];

    q="ASDFGHJKL:";
    d="&*(AEHTDCK";
    //cout<<q.length()<<" "<<d.length()<<endl;

    for(int i=0; i<q.length(); i++)
        m1[q[i]]=d[i];

    q="ZXCVBNM<>";
    d=")ZX<INWVG";
    //cout<<q.length()<<" "<<d.length()<<endl;

    for(int i=0; i<q.length(); i++)
        m1[q[i]]=d[i];

    char c=92;
    m1[c]=c;
    c=34;
    m1[c]='_';
    m1['?']=c;
    m1[' ']=' ';
    //cout<<c<<endl;


    while(getline(cin,q))
    {
        for(int i=0; i<q.length(); i++)
        {
            cout<<m1[q[i]];
        }
        cout<<endl;
    }


    return 0;
}
