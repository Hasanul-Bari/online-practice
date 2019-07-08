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
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int x=1;
    for(int i=0; i<n; i++)
    {
        if(x<=a[i])
        {
            //cout<<x<<" "<<a[i]<<endl;
            x++;

        }
    }

    cout<<x-1<<endl;


    return 0;
}
