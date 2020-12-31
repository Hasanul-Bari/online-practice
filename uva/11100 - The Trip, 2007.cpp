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

    int n,t=0;

    while(cin>>n)
    {

        if(n==0)
            break;

        if(t==1)
            cout<<endl;

        map<int,int> m;


        int mx=0;

        int a[n],c=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;

            if(mx<m[a[i]])
                mx=m[a[i]];

        }



        sort(a,a+n);

        vector<int> v[mx+2];


        for(int i=0,j=1; i<n; i++)
        {
            v[j].pb(a[i]);
            j++;

            if(j>mx)
                j=1;
        }


        cout<<mx<<endl;
        for(int i=1; i<=mx; i++)
        {
            for(int j=0; j<v[i].size(); j++)
            {
                if(j==v[i].size()-1)
                    cout<<v[i][j]<<endl;
                else
                    cout<<v[i][j]<<" ";
            }
        }







        t=1;
    }




    return 0;
}
