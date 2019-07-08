#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int k,n;
    cin>>k>>n;

    int a[k];
    for(int i=0; i<k; i++)
        cin>>a[i];

    sort(a,a+k,greater<int>());


    cout<<a[n-1]<<endl;

    return 0;
}
