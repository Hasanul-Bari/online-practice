#include<iostream>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(long long i=0; i<t; i++)
    {
        unsigned long long k,p,n,x;
        cin>>k>>p>>n;

        if(k<p)
        {
            x=0;
        }
        else
            x=(k-p)*n;

        cout<<x<<endl;
    }
    return 0;
}
