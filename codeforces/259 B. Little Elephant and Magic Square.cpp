#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int a[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }

    int x=a[0][1]+a[0][2];
    int y=a[1][0]+a[1][2];
    int z=a[2][0]+a[2][1];

    //cout<<(x+y+z)/2<<endl;
    int sum=(x+y+z)/2;

    a[0][0]=sum-x;
    a[1][1]=sum-y;
    a[2][2]=sum-z;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
