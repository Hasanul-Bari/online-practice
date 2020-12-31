#include<bits/stdc++.h>
using namespace std;

void primefactorize(long long n)
{
    for(long long i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cout<<"    "<<i<<endl;;
                n=n/i;
            }
        }
    }
    if(n>1)
        cout<<"    "<<n<<endl;
}




int main()
{
    long long n;
    while(cin>>n && n!=EOF)
    {
        primefactorize(n);
        cout<<endl;
    }




    return 0;

}

