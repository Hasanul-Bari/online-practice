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

    for(int i=0,j=1,k=n; i<n; i++)
    {
        if(i%2==0)
        {
            cout<<j<<" ";
            j++;
        }
        else
        {
            cout<<k<<" ";
            k--;
        }
    }
    cout<<endl;




    return 0;
}
