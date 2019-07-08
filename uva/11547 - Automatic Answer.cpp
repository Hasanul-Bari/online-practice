#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        long long x=abs( ((((((n*567)/9)+7492)*235)/47)-498)  );
        cout<<(x%100)/10<<endl;


    }
    return 0;
}
