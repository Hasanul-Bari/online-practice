#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int k,a,b;
    cin>>k>>a>>b;

    int x=(a/k)+(b/k);

    if(a/k==0 && b%k!=0)
        x=-1;

    if(b/k==0 && a%k!=0)
        x=-1;

    cout<<x<<endl;




    return 0;
}
