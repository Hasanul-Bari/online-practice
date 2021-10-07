#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int k,l,m,n,d;

    cin>>k>>l>>m>>n>>d;

    int c=0;

    for(int i=1; i<=d; i++)
    {
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
        {
            c++;
        }
    }

    cout<<d-c<<endl;

}


int main()
{
    faster

    //int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    solve(1);



    return 0;
}


