#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    string s;
    cin>>s;

    string h="heidi";

    int x=s.length();
    int j=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]==h[j])
        {
            j++;
        }
        if(j==5 && x!=5)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


    return 0;
}
