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

    int n,m;

    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;

        int a[n],b[m];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<m; i++)
            cin>>b[i];

        if(n>m)
            cout<<"Loowater is doomed!"<<endl;
        else
        {
            sort(a,a+n);
            sort(b,b+m);

            int i,j;
            ll s=0;
            for( i=0, j=0;  i<n && j<m; )
            {

                //cout<<a[i]<<" ** "<<b[j]<<endl;

                if(a[i]<=b[j])
                    s=s+b[j],i++,j++;
                else
                    j++;



            }

            if(i==n)
                cout<<s<<endl;
            else
                cout<<"Loowater is doomed!"<<endl;


        }

    }


    return 0;
}
