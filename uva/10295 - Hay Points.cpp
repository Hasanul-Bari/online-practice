#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,long long> mm;
    map<string,long long> :: iterator it;
    long long m,n,sum;
    cin>>m>>n;
    for(long long i=0; i<m; i++)
    {
        string s;
        long long x;
        cin>>s>>x;
        mm[s]=x;
    }

    for(long long i=0; i<n; i++)
    {
        sum=0;
        string s;
        while(cin>>s && s!=".")
        {
                sum=sum+mm[s];
        }
        cout<<sum<<endl;
    }

    return 0;

}
