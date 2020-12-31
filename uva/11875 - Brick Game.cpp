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
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        int x=((n+1)/2)-1;
        cout<<"Case "<<i<<": "<<a[x]<<endl;
    }
    return 0;
}
