#include<bits/stdc++.h>
using namespace std;


void primefactorize(long long n)
{
    vector<long long> a;
    for(long long i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {

                n=n/i;
            }
            a.push_back(i);
        }
    }
    if(n>1)
        a.push_back(n);


    sort(a.begin(),a.end());

    if(a.size()<2)
        cout<<-1<<endl;
    else
        cout<<a[a.size()-1]<<endl;
}

int main()
{
    long long n;
    while(cin>>n && n!=0)
    {
        primefactorize(abs(n));
    }

    return 0;

}
