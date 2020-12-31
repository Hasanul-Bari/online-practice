#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int t,n,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        p=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<=p)
                p++;
        }
        cout<<p<<endl;

    }
    return 0;
}
