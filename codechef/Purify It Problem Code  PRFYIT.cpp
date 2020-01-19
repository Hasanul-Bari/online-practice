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

    int t;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>s;

        int x=s.length(),z=0,o=0;

        char ss;

        vector<int> v1,v0;

        if(s[0]=='0')
            z++,ss='0';
        else
            o++,ss='1';


        for(int i=1; i<x; i++)
        {
            if(s[i]=='0')
                z++;
            else
                o++;


            if(s[i]!=s[i-1])
            {
                if(s[i-1]=='0')
                {
                    v0.pb(z);
                    z=0;
                }
                else
                {
                    v1.pb(o);
                    o=0;
                }
            }
        }

        if(s[x-1]=='0')
        {
            v0.pb(z);
        }
        else
        {
            v1.pb(o);
        }


        sort(v1.begin(),v1.end());
        sort(v0.begin(),v0.end());

        int oo=v1.size(), zz=v0.size();

        if(oo+zz<=3)
            cout<<0<<endl;
        else
        {
            int ans=0;

            //cout<<oo<<" "<<zz<<endl;

            if(oo!=zz)
            {
                if(oo<zz)
                {
                    for(int i=0; i<(zz/2)-1; i++)
                    {
                        ans=ans+v0[i]+v1[i];
                    }
                    ans=ans+v1[zz/2];
                }
                else
                {
                    for(int i=0; i<(oo/2)-1; i++)
                    {
                        ans=ans+v0[i]+v1[i];
                    }
                    ans=ans+v0[oo/2];
                }

                cout<<ans<<endl;

            }
            else
            {
                for(int i=0; i<oo/2; i++)
                {
                    if(i==(oo/2)-1)
                    {
                        if(oo%2==0)
                            ans=ans+min(v0[i],v1[i]);
                        else
                            ans=ans+v0[i]+v1[i];
                    }
                    else
                        ans=ans+v0[i]+v1[i];

                }

                cout<<ans<<endl;
            }




        }




    }




    return 0;
}
