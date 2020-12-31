#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<string,int> m;
        string s[n],x[n],y;

        for(int i=0; i<n; i++)
        {
            cin>>x[i]>>y;
            s[i]=x[i]+" "+y;
            m[x[i]]++;

        }

        for(int i=0; i<n; i++)
        {
            if(m[x[i]]==1)
            {
                cout<<x[i]<<endl;
            }
            else
                cout<<s[i]<<endl;
        }


    }




    return 0;
}
