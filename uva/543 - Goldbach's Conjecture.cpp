#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<bool> prime(1000000,true);
    vector<long long>a;
    // memset(prime,true,sizeof(prime));


    for(long long i=2; i*i<=1000000; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=1000000; j=j+i)
                prime[j]=false;
        }
    }

    for(long long i=2; i<=1000000; i++)
    {
        if(prime[i]==true && (i%2)!=0)
        {
            a.push_back(i);
        }
    }

    //cout<<a.size()<<endl;
    /*for(long long i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }*/

    long long n;
    while(cin>>n && n!=0)
    {



        int c=0;
        for(int i=0; i<a.size() && a[i]<n; i++)
        {
            //cout<<a[i]<<endl;
            for(int j=0; j<a.size() && a[j]<n; j++)
            {
                //cout<<a[j]<<" ` "<<endl;
                if(n==(a[i]+a[j]) )
                {
                    cout<<n<<" = "<<a[i]<<" + "<<a[j]<<endl;
                    c=1;
                    break;
                }

            }
            if(c==1)
                break;
        }


    }
    return 0;


}


