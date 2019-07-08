#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,k;
    string s;
    cin>>n>>k>>s;
    int x=s.length();

    int r=0,c=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]=='.')
        {
            if(r>k-1)
            {
                c=1;
                break;
            }
            r=0;
        }
        else
            r++;
    }

    if(c==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;






    return 0;
}
