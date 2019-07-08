#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    string s;
    int n,t;
    cin>>t;
    while(t--)
    {


        cin>>n;


        int c=0,o=0,d=0,e=0,h=0,f=0;
        while(n--)
        {
            cin>>s;
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]=='c')
                    c++;
                else if(s[i]=='o')
                    o++;
                else if(s[i]=='d')
                    d++;
                else if(s[i]=='e')
                    e++;
                else if(s[i]=='h')
                    h++;
                else if(s[i]=='f')
                    f++;
            }

        }
        c=c/2;
        e=e/2;

        int ans=min(c,min(o,min(d,min(e,min(h,f)))));

        cout<<ans<<endl;
    }





    return 0;
}
