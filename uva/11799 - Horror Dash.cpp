#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);

        printf("Case %d: %d\n",i,a[n-1]);
    }
    return 0;
}

