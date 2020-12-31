#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string> m;
    map <string,string> :: iterator it;

    int n;
    scanf("%d ",&n);

    for(int i=0; i<n; i++)
    {
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        m[s1]=s2;
    }


    int q;
    scanf("%d ",&q);

    for(int i=0; i<q; i++)
    {
        string s;
        getline(cin,s);
        for(it=m.begin(); it!=m.end(); it++)
        {
            if(s==it->first)
                cout<<it->second<<endl;
        }
    }
    return 0;
}
