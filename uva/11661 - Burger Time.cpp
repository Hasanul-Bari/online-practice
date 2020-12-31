#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    string s;
    while(cin>>l && l!=0)
    {
        cin>>s;
        int x=0,y=0,r,d,ans=2000002,c;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='Z')
            {
                ans=0;
                break;
            }
            else if(s[i]=='R')
            {
                r=i+1;
                x=1;
                if(x==1 && y==1)
                {
                    c=abs(r-d);
                    if(c<ans)
                        ans=c;
                }
            }
            else if(s[i]=='D')
            {
                d=i+1;
                y=1;

                if(x==1 && y==1)
                {
                    c=abs(r-d);
                    if(c<ans)
                        ans=c;
                }

            }
        }
        cout<<ans<<endl;
    }


    return 0;
}


