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

    int t,n,x,tmp;

    cin>>t;

    while(t--)
    {
        cin>>n;


        map<int,bool> m;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]=true;

        }

        int c=2,s=a[0];
        for(int i=1; i<n-1; i++)
        {
            //cout<<s+a[i]<<" ** "<<m[s+a[i]]<<endl;

            if(m[s+a[i]]==false && s+a[i]<a[i+1])
            {
                c++;
                s=s+a[i];
            }

        }
        cout<<c<<endl;
    }




    return 0;
}
