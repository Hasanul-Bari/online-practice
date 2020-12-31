#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<bool> prime(65536,true);
    vector<long long> a;

    for(long long i=2; i<=65536; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=65536; j=j+i)
                prime[j]=false;
        }
    }

    for(long long  i=2; i<=65536; i++)
    {
        if(prime[i]==true)
            a.push_back(i);
    }

    long long n,m;

    while(cin>>n>>m && n!=EOF)
    {
        if(m==0)
        {
            cout<<m<<" divides "<<n<<"!"<<endl;
        }
        else
        {



            long long xx=m;
            int hp=0;
            for(long long i=0; i<a.size() && i*i<=m; i++)
            {
                if(xx%a[i]==0)
                {

                    long long x=0,temp=a[i];

                    while(temp<=n)
                    {
                        x=x+(n/temp);
                        temp=temp*a[i];
                    }

                    int cc=0;

                    while(m%a[i]==0)
                    {
                        cc++;
                        m=m/a[i];
                    }

                    if(cc>x)
                    {
                        hp=1;
                        break;
                    }

                }
            }
            if(m!=1 && n<m)
                hp=1;

            if(hp==1)
                cout<<xx<<" does not divide "<<n<<"!"<<endl;
            else
                cout<<xx<<" divides "<<n<<"!"<<endl;
        }

    }


    return 0;
}



