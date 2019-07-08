#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,m,h;
    cin>>n>>m>>h;

    int r[n],c[m];
    for(int i=0; i<m; i++)
        cin>>c[i];

    for(int i=0; i<n; i++)
        cin>>r[i];

    int x;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>x;
            if(x==1)
            {
                cout<<min(r[i],c[j])<<" ";
            }
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }


    return 0;
}
