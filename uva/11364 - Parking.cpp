#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        int m=((a[n-1]-a[0])/2)+a[0];
        int x=( (m-a[0])+(a[n-1]-a[0])+(a[n-1]-m) );

        cout<<x<<endl;

    }
    return 0;
}
