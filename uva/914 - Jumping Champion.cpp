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


    long long m,n;
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {

        map<int,int> mm;
        map<int,int> :: iterator it;
        vector<long long>a;

        cin>>m>>n;

        for(long long i=m; i<=n; i++)
        {
            if(prime[i]==true)
            {
                a.push_back(i);
            }
        }

        /*cout<<a.size()<<endl;
        for(long long i=0; i<a.size(); i++)
        {
            cout<<a[i]<<" ";
        }*/



        for(long long i=1; i<a.size(); i++)
        {
            int d=a[i]-a[i-1];
            mm[d]++;

        }

        int num=-1,max=0;
        for(it=mm.begin(); it!=mm.end(); it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            if(max<it->second)
            {
                max=it->second;
                num=it->first;
            }
            else if(max==it->second)
            {
                num=-1;
            }


        }

        if(num==-1)
            cout<<"No jumping champion"<<endl;
        else
            cout<<"The jumping champion is "<<num<<endl;

        //mm.clear();
        //a.clear();

    }

    return 0;


}
