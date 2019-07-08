#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        cin>>n;
        char s[n];
        cin>>s;
        c=0;

        if(n==1 && s[0]=='0')
            c++;

        else
        {

            if(s[0]=='0' && s[1]=='0')
            {
                s[0]='1';
                c++;
            }
            //cout<<c<<endl;

            for(int i=1; i<strlen(s)-1; i++)
            {
                if(s[i-1]=='0' && s[i]=='0' && s[i+1]=='0')
                {
                    s[i]='1';
                    c++;
                }

            }

            if(s[n-2]=='0' && s[n-1]=='0')
            {
                s[n-1]=='1';
                c++;
            }


        }

        cout<<c<<endl;
        //cout<<s<<endl;
    }
    return 0;
}
