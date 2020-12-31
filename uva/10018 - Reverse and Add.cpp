#include<iostream>
using namespace std;

int main()
{
    int n,a=0,digit;
    cin>>n;

    while(n>0)
    {
        digit=n%10;
        n=n/10;
        a=(a*10)+digit;

    }
    cout<<a;



}
