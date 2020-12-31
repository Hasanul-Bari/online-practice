#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<bool> prime(1000000,true);
    prime[0]=false;
    prime[1]=false;


    for(long long i=2; i*i<=1000000; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=1000000; j=j+i)
                prime[j]=false;
        }
    }


    long long n;
    while(cin>>n && n!=0)
    {



        int c=0;
        for(long long i=2; i<=n; i++)
        {
            if(prime[i]==true && prime[n-i]==true )
            {
                printf("%lld:\n",n);
                printf("%lld+%lld\n",i,n-i);
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%lld:\n",n);
            printf("NO WAY!\n");
        }

    }

    return 0;


}



