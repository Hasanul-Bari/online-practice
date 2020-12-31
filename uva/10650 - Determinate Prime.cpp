#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    vector<bool> prime(32000,true);
    vector<int> a;
    vector<int> v;
    for(int i=2; i*i<=32000; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=32000; j=j+i)
                prime[j]=false;
        }
    }

    for(int i=2; i<=32000; i++)
    {
        if(prime[i]==true)
            a.push_back(i);
    }

    /* for(int i=0; i<a.size(); i++)
         cout<<a[i]<<" ";*/

    int x,y;
    while(cin>>x>>y && x!=0 && y!=0)
    {

        if(x>y)
            swap(x,y);

        int i=0,j;
        while(a[i]<x)
        {
            i++;
        }


        for( i; i<a.size()-2 && a[i]<=y && a[i]>=x ; i++)
        {
            //cout<<i<<endl;
            if(a[i+1]-a[i]==a[i+2]-a[i+1])
            {
                j=i;
                //cout<<j<<endl;
                cout<<a[i]<<" "<<a[i+1]<<" ";
                while((a[i+1]-a[i])==(a[i+2]-a[i+1]))
                {
                    cout<<a[i+2]<<" ";
                    i++;
                    j=i+2;
                    //cout<<i<<" * "<<endl;
                }
                cout<<endl;
                i=j-1;
                //i=j-1;
                //cout<<i<<endl;
            }
        }
    }
    return 0;

}
