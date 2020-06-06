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

    int n;
    cin>>n;

    int x=n%2;

    n=n/2;

    if(x==1)
    {
        cout<<7;
        n--;
    }



    for(int i=0; i<n; i++)
        cout<<1;

    cout<<endl;






    return 0;
}
