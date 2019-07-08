#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n/2; i++)
    {
        if(i%2==0)
        {
            swap(a[i],a[n-1-i]);
        }
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;


    return 0;
}
