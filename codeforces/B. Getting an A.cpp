#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    int a[n];
    int s=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }

    double av=((double)(s))/((double)(n));

    //cout<<av<<endl;

    if(av>=4.5)
    {
        cout<<0<<endl;
    }
    else
    {
        sort(a,a+n);
        int c=0;
        for(int i=0; i<n; i++)
        {
            s=s-a[i];
            s=s+5;
            av=((double)(s))/((double)(n));
            c++;
            if(av>=4.5)
            {
               break;
            }

        }
        cout<<c<<endl;
    }



    return 0;
}
