#include<bits/stdc++.h>
using namespace std;


long long divisorcount(long long n)
{
    long long divisor=1;
    for(long long i=2; i*i<=n; i++)
    {

        if(n%i==0)
        {
            long long c=0;
            while(n%i==0)
            {
                n=n/i;
                c++;
            }

            divisor=divisor*(c+1);
        }

    }
    if(n>1)
        divisor=divisor*2;

    return divisor;

}



int main()
{
    long long n;
    cin>>n;
    for(long long i=0; i<n; i++)
    {



        long long l,u,max=0;
        cin>>l>>u;
        vector<long long> a,v;
        for(long long i=l; i<=u; i++)
        {
            long long x=divisorcount(i);
            //a.push_back(x);
            v.push_back(x);
            if(x>max)
                max=x;

        }
        //sort(a.begin(),a.end());
        /*for(long long i=0; i<a.size(); i++)
            cout<<a[i]<<endl;*/


        //long long y= a[a.size()-1];

        for(long long i=0; i<v.size(); i++)
        {
            if(max==v[i])
            {
                cout<<"Between "<<l<<" and "<<u<<", "<<l+i<<" has a maximum of "<<v[i]<<" divisors."<<endl;
                break;
            }


        }

    }


    return 0;

}



