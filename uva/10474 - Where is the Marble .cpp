#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,q,x,j,k=1;
    while(cin>>n>>q && (n!=0 && q!=0))
    {

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        cout<<"CASE# "<<k<<":"<<endl;
        k++;
        for(int i=0; i<q; i++)
        {
            cin>>x;
            j=lower_bound(a,a+n,x)-a;
            if(a[j]==x)
                cout<<x<<" found at "<<j+1<<endl;
            else
                cout<<x<<" not found"<<endl;

        }

    }





    return 0;
}

