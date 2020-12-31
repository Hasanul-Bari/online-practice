#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n;
    string s;
    cin>>n>>s;

    int mx=0;

    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            char l='-';
            char f1=char(i+97);
            char f2=char(j+97);
            int c=0;

            for(int k=0; k<n; k++)
            {
                if(s[k]==f1)
                {
                    if(l=='-' || l==f2)
                    {
                        l=f1;
                        c++;
                    }
                    else
                    {
                        c=0;
                        break;
                    }

                }
                else  if(s[k]==f2)
                {
                    if(l=='-' || l==f1)
                    {
                        l=f2;
                        c++;
                    }
                    else
                    {
                        c=0;
                        break;
                    }

                }
            }

            if(c>mx)
                mx=c;
        }
    }

    if(mx==1)
        mx=0;

    cout<<mx<<endl;

    return 0;
}
