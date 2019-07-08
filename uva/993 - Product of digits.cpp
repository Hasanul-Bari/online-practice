#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {

        cin>>n;
        m=n;

        vector<long long> v;
        int c=0;
        for(long long i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    if(i>9)
                        c=1;
                    v.push_back(i);
                    n=n/i;
                }
            }
        }
        if(n>1)
        {
            if(n>9)
                c=1;
            v.push_back(n);
        }

        if(c==1)
            cout<<-1<<endl;

        else if(v.size()<2)
            cout<<m<<endl;


        else
        {

            long long x=v[v.size()-1];
            vector<long long> a,b;
            for(long long i=v.size()-2; i>=0; i--)
            {
                long long temp=x;
                x=x*v[i];
                if(x>9)
                {
                    a.push_back(temp);
                    x=v[i];
                }

            }
            a.push_back(x);

            sort(a.begin(),a.end());



            x=v[0];
            for(long long i=1; i<v.size(); i++)
            {
                long long temp=x;
                x=x*v[i];
                if(x>9)
                {
                    b.push_back(temp);
                    x=v[i];
                }

            }
            b.push_back(x);

            sort(b.begin(),b.end());


            if(a[0]<=b[0])
            {


                for(long long i=0; i<a.size(); i++)
                    cout<<a[i];

                cout<<endl;
            }

            else
            {
                for(long long i=0; i<b.size(); i++)
                    cout<<b[i];

                cout<<endl;
            }
        }

    }
    return 0;


}
