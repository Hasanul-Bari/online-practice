#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n,x,s=0;
    cin>>n;



    for(int i=0; i<n; i++)
    {
        cin>>x;
        s=s+x;
    }

    //cout<<s<<endl;

    if((n-1)==(s/2))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




    return 0;
}
