#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,ans=0,cc;
    string s;
    while(cin>>a)
    {
        string h,p;
        cin>>s;
        if(s[s.length()-1]!='?')
        {


        char op=s[0];

        cc=0;
        for(int i=1; i<s.length() ; i++)
        {
            if(cc==0 && s[i]!='=')
                h=h+s[i];
            else if(s[i]=='=')
                cc=1;
            else if(cc==1)
            p=p+s[i];

        }

        //cout<<a<<" "<<h<<" "<<p<<" "<<op<<endl;

        int b=0;
        for(int i=0; i<h.length(); i++)
        {
            b=b*10;
            b=b+(h[i]-48);
        }
        int c=0;
        for(int i=0; i<p.length(); i++)
        {
            c=c*10;
            c=c+(p[i]-48);
        }

        //cout<<a<<" "<<b<<" "<<c<<endl;

        if(op=='+' && a+b==c)
            ans++;
        else if(op=='-'  && a-b==c)
            ans++;

        }


    }
    cout<<ans<<endl;


    return 0;
}


