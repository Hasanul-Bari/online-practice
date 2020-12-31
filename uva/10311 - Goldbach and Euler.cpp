#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<bool> prime(100000000,true);
    prime[0]=false;
    prime[1]=false;


    for(long long i=2; i*i<=100000000; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=100000000; j=j+i)
                prime[j]=false;
        }
    }

    long long n;
    while(cin>>n && n!=EOF)
    {



        int c=0;
        int x,y;

        for(long long i=n/2; i>=0; i--)
        {
            if(prime[i]==true && prime[n-i]==true && i!=n-i)
            {
                x=i;
                y=n-i;
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<n<<" is not the sum of two primes!"<<endl;
        else if(c==1)
            cout<<n<<" is the sum of "<<x<<" and "<<y<<"."<<endl;
    }

    return 0;


}
