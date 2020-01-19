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

    int t,n,nn,x;
    cin>>t;
    while(t--)
    {
        cin>>n;

        nn=n;

        map<int,int> m;
        map<int,int> :: iterator it;

        while(n--)
        {
            cin>>x;
            m[x]++;
        }

        int mx=0;

        for(it=m.begin(); it!=m.end(); it++)
        {
            if(mx<it->second)
                mx=it->second;
        }

        cout<<nn-mx<<endl;
    }




    return 0;
}
