#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int x,y,q,h;
    cin>>q;

    for(int i=0; i<q; i++)
    {
        cin>>h;
        x=lower_bound(a,a+n,h)-a;
        y=upper_bound(a,a+n,h)-a;

        //cout<<x<<" "<<y<<endl;
        x--;
        if(x<0 || x>=n)
            cout<<"X ";
        else
            cout<<a[x]<<" ";

        if(y>=n || y<0)
            cout<<"X"<<endl;
        else
            cout<<a[y]<<endl;

    }



    return 0;
}

