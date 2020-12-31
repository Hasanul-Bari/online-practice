#include<bits/stdc++.h>
using namespace std;

int main()
{
    string h,s;
    set<string> m;
    set<string> :: iterator it;
    while(cin>>h)
    {
        s="";
        for(int i=0; i<h.length(); i++)
        {

            if(isalpha(h[i]))
            {
                h[i]=tolower(h[i]);
                s=s+h[i];
                //cout<<s<<endl;

            }
            else
            {
                if(s.length()!=0)
                {
                    //cout<<s<<endl;
                    m.insert(s);
                    s="";
                }
            }
        }
        if(s.length()!=0)
            m.insert(s);




    }

    for(it=m.begin(); it!=m.end(); it++)
        cout<<*it<<endl;

    return 0;
}
