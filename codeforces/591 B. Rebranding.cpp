#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n,m;
    string s;
    cin>>n>>m>>s;

    char x,y;
    string s1="abcdefghijklmnopqrstuvwxyz";
    //cout<<s1.length()<<endl;
    //cout<<'a'-97<<endl;

    for(int j=0; j<m; j++)
    {
        cin>>x>>y;
        for(int i=0; i<26; i++)
        {
            if(s1[i]==x)
                s1[i]=y;
            else if(s1[i]==y)
                s1[i]=x;
        }

    }

    for(int i=0; i<n; i++)
    {
        s[i]=s1[s[i]-97];
    }

    cout<<s<<endl;


    return 0;
}
