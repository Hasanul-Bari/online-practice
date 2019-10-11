#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n,x;
    cin>>n;

    int s=0;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        s=s+x;
    }

    //cout<<s<<endl;

    int av=s/n;

    while(n*av<=s)
    {
        av++;
    }
    cout<<av<<endl;




    return 0;
}

