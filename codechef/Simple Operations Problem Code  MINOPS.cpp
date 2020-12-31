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
    string s,r;

    cin>>t;

    while(t--)
    {
        cin>>s>>r;

        int n=s.length(),c=0,cc=0;

        bool hp=false;

        vector<int> vv,ne;

        for(int i=0; i<n; i++)
        {
            if(s[i]!=r[i])
            {
                if(c!=0 && cc!=0)
                {
                    ne.pb(cc);
                }
                cc=0;


                c++;
            }
            else
            {
                cc++;

            }
        }

        //cout<<c<<endl;

        int k=ne.size()+1,ans=INT_MAX;

        sort(ne.begin(),ne.end());

        //cout<<k<<endl;

        ans=min(ans,k*c);

        for(int j=0; j<ne.size(); j++)
        {
            c=c+ne[j];
            k--;
            ans=min(ans,k*c);

        }

        cout<<ans<<endl;




    }




    return 0;
}
