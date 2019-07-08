#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n,k;
    string s;
    cin>>n>>k>>s;

    map<char,int> m;
    bool a[n]={false};


    for(int i=n-1; i>=0; i--)
    {
        if(m[s[i]]==0)
        {
            a[i]=true;
            m[s[i]]++;
        }
    }

    /*for(int i=0; i<n; i++)
        cout<<a[i]<<" ";*/

    m.clear();

    int c=0;
    for(int i=0; i<n; i++)
    {
        if(m[s[i]]==0)
        {
            m[s[i]]++;
            c++;

        }



        if(c>k)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(a[i]==true)
            c--;
    }

    cout<<"NO"<<endl;
    return 0;


}
