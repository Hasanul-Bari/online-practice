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
    int x=(2*n)+1;

    int a[x][x];
    for(int i=0; i<x; i++)
        for(int j=0; j<x; j++)
            a[i][j]=-1;


    a[n][n]=n;

    for(int i=n-1; i>=0; i--)
        a[i][n]=a[i+1][n]-1;

    for(int i=n+1; i<x; i++)
        a[i][n]=a[i-1][n]-1;


    for(int i=0; i<x; i++)
    {
        for(int j=0,k=n-1; j<a[i][n]; j++,k--)
        {
            a[i][k]=a[i][k+1]-1;
        }
    }

    for(int i=0; i<x; i++)
    {
        for(int j=0,k=n+1; j<a[i][n]; j++,k++)
        {
            a[i][k]=a[i][k-1]-1;
        }
    }



    for(int i=0; i<x; i++)
    {
        for(int j=0; j<=n+a[i][n]; j++)
        {
            if(j==n+a[i][n])
            {
                if(a[i][j]!=-1)
                    cout<<a[i][j];
                else
                    cout<<" ";
            }
            else
            {
                if(a[i][j]!=-1)
                    cout<<a[i][j]<<" ";
                else
                    cout<<"  ";

            }
        }
        cout<<endl;
    }





    return 0;
}
