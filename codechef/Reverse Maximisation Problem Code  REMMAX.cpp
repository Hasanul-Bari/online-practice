#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        string h;
        int x=s.length();

        if(x==1)
            h=s;

        else
        {
            for(int i=x-1; i>0; i--)
            {
                if(s[i-1]!='0')
                {
                    s[i]='9';
                }
            }


        }

    }




    return 0;
}
