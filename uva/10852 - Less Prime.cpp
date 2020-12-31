#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t;
    vector<bool> prime(10000,true);
    vector<int> a;
    for(int i=2; i*i<=10000; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=10000; j=j+i)
                prime[j]=false;
        }
    }

    for(int i=2; i<=10000; i++)
    {
        if(prime[i]==true)
            a.push_back(i);
    }
    /*for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";*/


    cin>>t;
    for(int j=0; j<t; j++)
    {



        cin>>n;
        for(int i=0; a[i]<=n && i<a.size(); i++)
        {
            if(a[i]>n/2)
            {
                cout<<a[i]<<endl;
                break;

            }

        }
    }

    return 0;
}

