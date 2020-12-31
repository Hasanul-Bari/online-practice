#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;

    string s;
    int a=0,g=0,c=0,t=0,w=0;

    cin>>n>>s;
    int x=s.length();
    for(int i=0; i<x; i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='G')
            g++;
        else if(s[i]=='T')
            t++;
        else if(s[i]=='C')
            c++;
        else
            w++;
    }

    int m=max(a,max(g,max(t,c)));

    a=m-a;
    g=m-g;
    c=m-c;
    t=m-t;
    int h=a+g+c+t;

    int r=w-h;
    //cout<<r<<" "<<w<<" "<<h<<endl;


    if(r%4==0 && r>=0)
    {
        r=r/4;
        a=a+r;
        g=g+r;
        c=c+r;
        t=t+r;

        for(int i=0; i<x; i++)
        {

            if(s[i]=='?')
            {

                if(a>0)
                {
                    s[i]='A';
                    a--;
                }
                else if(g>0)
                {
                    s[i]='G';
                    g--;
                }
                else if(c>0)
                {
                    s[i]='C';
                    c--;
                }
                else if(t>0)
                {
                    s[i]='T';
                    t--;
                }
            }
        }
        cout<<s<<endl;
    }
    else
        cout<<"==="<<endl;




    return 0;
}
