#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,t,h=1;
    cin>>t;
    while(t--)
    {

        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        int s=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {

                int k=lower_bound(a,a+n,a[i]+a[j])-a;

                //cout<<a[i]<<" "<<a[j]<<" "<<a[i]+a[j]<<" "<<k<<" "<<k-1-j<<endl;
                s=s+(k-1-j);

            }
        }

        cout<<"Case "<<h<<": "<<s<<endl;
        h++;

    }


    return 0;
}


/*
a+b>c not a+b>=c

*/
