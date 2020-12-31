#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<bool> prime(10000000,true);
    prime[0]=false;
    prime[1]=false;

    for(long long i=2; i*i<=10000000; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=10000000; j=j+i)
                prime[j]=false;
        }
    }

    long long n;
    while(cin>>n)
    {

        if(n<8)
            cout<<"Impossible."<<endl;
        else if(n%2==0)
        {
            cout<<2<<" "<<2<<" ";
            n=n-4;
            for(long long i=2; i<=n; i++)
            {
                if(prime[i]==true && prime[n-i]==true)
                {
                    cout<<i<<" "<<n-i<<endl;
                    break;
                }

            }

        }


        else
        {
            cout<<2<<" "<<3<<" ";
            n=n-5;
            for(long long i=2; i<=n; i++)
            {
                if(prime[i]==true && prime[n-i]==true)
                {
                    cout<<i<<" "<<n-i<<endl;
                    break;
                }

            }

        }
    }
    return 0;
}
