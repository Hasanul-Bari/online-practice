#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[500001];
    a[1]=1;
    a[2]=2;
    int c=2;
    for(int i=3; i<=500000; i=i+2)
    {
        if(i<c)
        {
            c=2;
            a[i]=c;
            c=c+4;
        }
        else
        {
            a[i]=c;
            c=c+4;
        }
    }
    c=4;
    for(int i=4; i<=500000; i=i+2)
    {
        if(i<c)
        {
            c=4;
            a[i]=c;
            c=c+4;
        }
        else
        {
            a[i]=c;
            c=c+4;
        }
    }

    /*for(int i=3; i<=500000; i=i+2)
        cout<<a[i]<<" ";*/

    int n;
    while(cin>>n && n!=0)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}

