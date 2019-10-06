#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,x,y,t;
    cin>>t;
    while(t--)
    {


        string s,r;
        cin>>n>>s>>r;
        x=0,y=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                x++;
            if(r[i]=='1')
                y++;
        }

        if(x==y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }





    return 0;
}
