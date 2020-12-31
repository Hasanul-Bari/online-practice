#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int a[5],ss=0;
    for(int i=1; i<=4; i++)
        cin>>a[i];

    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1')
            ss=ss+a[1];
        else if(s[i]=='2')
            ss=ss+a[2];
        else if(s[i]=='3')
            ss=ss+a[3];
        else if(s[i]=='4')
            ss=ss+a[4];
    }

    cout<<ss<<endl;


    return 0;
}
