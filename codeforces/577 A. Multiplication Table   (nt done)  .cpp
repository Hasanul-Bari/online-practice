#include<iostream>
using namespace std;

int main()
{
    unsigned long long n;
    unsigned long long x;
    cin>>n>>x;
    unsigned long long a[n+1][n+1];

    for(unsigned long long i=1; i<=n; i++)
    {
        for(unsigned long long j=1; j<=n; j++)
        {
            a[i][j]=i*j;
        }
    }

    for(unsigned long long i=1; i<=n; i++)
    {
        for(unsigned long long j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    unsigned long long c=0;
    for(unsigned long long i=1; i<=n; i++)
    {
        for(unsigned long long j=1; j<=n; j++)
        {
            if(a[i][j]==x)
                c++;
        }
    }

    cout<<c<<endl;

    return 0;


}
