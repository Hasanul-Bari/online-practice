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

    int x=sqrt((double)n);
    //cout<<x<<endl;

    int r=n-(x*x);
    //cout<<r<<endl;

    int p=x,q=x;
    if(r>x)
    {
        p++;
        q++;
    }
    if(r>0 && x>=r)
        p++;

    cout<<2*(p+q)<<endl;

    return 0;
}
