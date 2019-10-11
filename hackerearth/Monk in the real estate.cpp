#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster
    int t,e,x,y;
    cin>>t;
    while(t--)
    {
        cin>>e;
        set<int> s;
        while(e--)
        {
            cin>>x>>y;
            s.insert(x);
            s.insert(y);

        }
        cout<<s.size()<<endl;

    }




    return 0;
}
