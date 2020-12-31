#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    string s1,s2,h;
    cin>>s1>>s2;
    bool c=true;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]<s2[i])
        {
            c=false;
            break;
        }
        else
            h=h+s2[i];
    }

    if(c==false)
        cout<<-1<<endl;
    else
        cout<<h<<endl;




    return 0;
}
