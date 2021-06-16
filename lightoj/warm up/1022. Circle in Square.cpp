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

    int t,k=1;
    cin>>t;

    double r;

    while(t--)
    {
        cin>>r;

        double x=((r+r)*(r+r))-(PI*r*r);


        //cout<<x<<endl;

        printf("Case %d: %.2lf\n",k,x);
        k++;
    }




    return 0;
}
