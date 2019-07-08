#include<bits/stdc++.h>
using namespace std;

int divisorcount(int n)
{
    int divisor=1;
    for(int i=2; i*i<=n; i++)
    {

        if(n%i==0)
        {
            int c=0;
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

    vector<bool> prime(10000,true);
    prime[0]=false;
    prime[1]=false;

    for(int i=2; i*i<=10000; i++)
    {
        if(prime[i]==true)
        {
            for(int  j=i*i; j<=10000; j=j+i)
                prime[j]=false;
        }
    }

    int l,h;
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {

        cin>>l>>h;
        /*if(l>h)
            swap(l,h);*/

        vector<int> a;
        for(int  i=l; i<=h; i++)
        {
            if(prime[i]==true)
                a.push_back(i);

            else
            {
                int x=divisorcount(i);
                if(prime[x]==true)
                    a.push_back(i);

            }
        }
        int i;
        if(a.size()==0)
            cout<<-1<<endl;

        else
        {

            for(i=0; i<a.size()-1; i++)
                cout<<a[i]<<" ";
            cout<<a[i]<<endl;
        }


    }
    return 0;
}
