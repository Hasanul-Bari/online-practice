#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string> m;
    string p;
    while(getline(cin,p))
    {
        string s,h;
        if(p.length()==0)
            break;

        int i;
        for(i=0; p[i]!=' '; i++)
            h=h+p[i];

        i++;

        for(  ; i!=p.length(); i++)
            s=s+p[i];

        //cout<<s<<" "<<h<<endl;
        m[s]=h;


    }

    while(cin>>p)
    {
        if(m[p].length()!=0)
        cout<<m[p]<<endl;
        else
            cout<<"eh"<<endl;
    }

    return 0;
}
