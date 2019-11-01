#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class coin
{
public:
    int x,y;
};

int main()
{
    faster

    int n,target;
    cin>>n>>target;

    coin c[n];

    for(int i=0; i<n; i++)
        cin>>c[i].x>>c[i].y;

    int tar=target*target;

    coin a[tar+1];
    a[0].x=0,a[0].y=0;

    for(int i=1; i<=tar; i++)
    {
        a[i]=tar+1;
        for(int j=0; j<n; j++)
        {
            int z=(c[j]x*c[j].x)+(c[j]x*c[j].x)
            if(i>=  &&  a[i]>  a[i-coin[j]]+1  )
                a[i]=a[i-coin[j]]+1;
        }
    }

    for(int i=0; i<=target; i++)
        cout<<a[i]<<" ";
    cout<<endl;


    cout<<a[target]<<endl;



}

