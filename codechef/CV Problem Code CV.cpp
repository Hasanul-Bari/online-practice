#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

bool isvowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    else
        return false;
}

int main()
{
    faster
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int x=s.length();
        int c=0;

        for(int i=0; i<x-1; i++)
        {
            if(isvowel(s[i])==false && isvowel(s[i+1])==true)
                c++;
        }
        cout<<c<<endl;
    }





    return 0;
}
