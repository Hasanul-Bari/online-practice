#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n,x,t;
    string s;
    cin>>t;
    while(t--)
    {

        cin>>n>>x;
        cin>>s;

        set<int> ss;
        ss.insert(x);
        for(int i=0; i<n; i++)
        {
            if(s[i]=='L')
                x--;
            else if(s[i]=='R')
                x++;

            ss.insert(x);
        }
        cout<<ss.size()<<endl;

    }





    return 0;
}
