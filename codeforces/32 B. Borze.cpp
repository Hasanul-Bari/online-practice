#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    string s,h;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='.')
            h=h+'0';
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
                h=h+'1';
            else
                h=h+'2';

            i++;
        }
    }

    cout<<h<<endl;



    return 0;
}
