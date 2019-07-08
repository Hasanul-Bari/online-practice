#include<bits/stdc++.h>
using namespace std;

long long x;

void primefactorize(long long n)
{
    vector<long long> a;

    for(long long i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                a.push_back(i);
                n=n/i;
            }

        }
    }
    if(n>1)
        a.push_back(n);


    //sort(a.begin(),a.end());
    if(x<0)
    {
        cout<<x<<" = -1 x ";
        for(int i=0; i<a.size()-1; i++)
        {
            cout<<a[i]<<" x ";
        }
        cout<<a[a.size()-1]<<endl;
    }
    else
    {
        cout<<x<<" = ";
        for(int i=0; i<a.size()-1; i++)
        {
            cout<<a[i]<<" x ";
        }
        cout<<a[a.size()-1]<<endl;
    }
}

int main()
{
    long long n;

    while(cin>>n && n!=0)
    {
        x=n;
        if(n==1)
            cout<<x<<" = "<<endl;
        else if(n==-1)
            cout<<x<<" = -1 x "<<endl;
        else
            primefactorize(abs(n));
    }

    return 0;

}
