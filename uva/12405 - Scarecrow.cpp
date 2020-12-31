#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n,t,k=1;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        int c=0,ss=0;

        for(int i=0; i<n; i++)
        {
            //cout<<s[i]<<" "<<ss<<" "<<c<<endl;

            if(s[i]=='.')
                c++;

            else if(s[i]=='#' && i+1<n && s[i+1]=='#')
            {
                ss=ss+(c/3);

                if(c%3!=0)
                    ss++;

                c=0;

            }
            else if(s[i]=='#')
            {
                ss=ss+(c/3);

                if(c%3==2)
                    ss++;

                if(c%3==1)
                    c=2;
                else
                    c=0;
            }


            //cout<<s[i]<<" "<<ss<<" "<<c<<endl;

        }

        ss=ss+(c/3);

        if(c%3!=0)
            ss++;

        cout<<"Case "<<k<<": "<<ss<<endl;
        k++;


    }






    return 0;
}
