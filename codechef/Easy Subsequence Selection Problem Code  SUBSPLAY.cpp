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

    int t,n;
    string s;
    cin>>t;



    while(t--)
    {
        cin>>n>>s;

        vector<int> v[27];

        for(int i=0; i<n; i++)
        {
            int x=s[i]-'a';
            v[x].pb(i+1);
        }

        int mn=n;

        for(int i=0; i<26; i++)
        {
            if(v[i].size()>=2)
            {
                for(int j=1; j<v[i].size(); j++)
                {
                    int z=v[i][j]-v[i][j-1];

                    if(mn>z)
                        mn=z;
                }
            }
        }

        cout<<n-mn<<endl;
    }




    return 0;
}
