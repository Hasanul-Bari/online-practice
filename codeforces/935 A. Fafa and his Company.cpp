#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,c=0;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
            c++;
    }

    cout<<c<<endl;





    return 0;
}
