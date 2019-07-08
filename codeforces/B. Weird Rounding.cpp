#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    string s;
    int k;
    cin>>s>>k;

    int x=s.length(),c=0,h=0;
    for(int i=x-1; i>=0; i--)
    {
        if(s[i]=='0')
        {
            c++;
            if(c==k)
            {
                cout<<h<<endl;
                return 0;
            }
        }
        else
            h++;

    }
    cout<<x-1<<endl;

    return 0;
}
