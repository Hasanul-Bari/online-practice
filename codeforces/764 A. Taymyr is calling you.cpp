#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,m,z,c=0;
    cin>>n>>m>>z;

    for(int i=n; i<=z; i=i+n)
    {
        if(i%m==0)
            c++;
    }

    cout<<c<<endl;




    return 0;
}
