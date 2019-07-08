#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n;
    string s;
    cin>>n>>s;

    vector<int> v;
    v.push_back(n);
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
            {
                v.push_back(i);
                v.push_back(n/i);
            }
            else
                v.push_back(i);

            //cout<<i<<" "<<n/i<<endl;
        }

    }

    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        //cout<<v[i]<<" ";
        reverse(s.begin(),s.begin()+v[i]);
        //cout<<s<<endl;
    }

    cout<<s<<endl;




    return 0;
}
