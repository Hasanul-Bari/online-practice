#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;

    int x,y;
    cin>>x>>y;
    int p=x-y;
    x=y;

    bool c=0;
    for(int i=0; i<n-2; i++)
    {
        cin>>y;
        if(x-y!=p)
        {
            c=1;
        }
        x=y;
    }
    if(c==1)
        cout<<y<<endl;
    else
        cout<<y-p<<endl;




    return 0;
}
