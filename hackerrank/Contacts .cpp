#include<bits/stdc++.h>
using namespace std;

vector<string> v;

int check(string s)
{
    int c=0,cc;
    for(int i=0; i<v.size(); i++)
    {
        cc=0;
        for(int j=0; j<s.length(); j++)
        {
            if(s[j]!=v[i][j])
            {
                cc=1;
                break;
            }
        }

        if(cc==0)
            c++;
    }

    return c;
}

int main()
{

    int n;
    cin>>n;
    string s,h;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        if(s=="add")
        {
            cin>>h;
            v.push_back(h);
        }
        else
        {
            cin>>h;
            cout<<check(h)<<endl;
        }
    }

    return 0;
}
