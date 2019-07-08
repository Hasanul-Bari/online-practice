#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    string s;
    cin>>s;
    vector<int> v;

    v.push_back(0);
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]!=s[i-1])
        {
            v.push_back(i);
        }
    }
    v.push_back(s.length());






    int q,x,y;
    cin>>q;
    for(int i=0; i<q; i++)
    {
          cin>>x>>y;

          if(x==1)
          {
              int j=lower_bound(v.begin(),v.end(),y)-v.begin();
              int k=upper_bound(v.begin(),v.end(),y)-v.begin();

              //cout<<v[j]<<" "<<v[k]<<endl;

              if(v[j]!=y)
                j=j-1;

              //cout<<v[j]<<" "<<v[k]<<endl;

              int ans=v[k]-v[j];
              cout<<ans<<endl;

          }
          else
          {
              //v.push_back(y);
              v.push_back(y+1);
              sort(v.begin(),v.end());
          }
    }





    return 0;
}
