#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string,string> mm;
    map<string,string> :: iterator it;
    map<string,string> :: reverse_iterator rit;


    for(int i=0; i<n; i++)
    {
        string name,d,m,y,s;
        cin>>name>>d>>m>>y;

        if(d.length()==1)
            d="0"+d;

        if(m.length()==1)
            m="0"+m;

        s=y+m+d;
        mm[s]=name;
    }
    rit=mm.rbegin();
    cout<<rit->second<<endl;

    it=mm.begin();
    cout<<it->second<<endl;


    return 0;



}
