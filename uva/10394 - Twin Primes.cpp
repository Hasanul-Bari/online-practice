#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    vector<bool> prime(20000000,true);
    vector<int> a;
    vector<int> t;
    for(int i=2; i*i<=20000000; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=20000000; j=j+i)
                prime[j]=false;
        }
    }

    for(int i=2; i<=20000000; i++)
    {
        if(prime[i]==true)
            a.push_back(i);
    }
    /*for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";*/

    for(int i=0; i<a.size()-1; i++)
    {
        //cout<<a[i]<<" "<<a[i+1]<<endl;
        if((a[i+1]-a[i])==2)
        {
            //cout<<a[i]<<" "<<a[i+1]<<endl;
            t.push_back(a[i]);
            t.push_back(a[i+1]);
        }
    }

    int s;
    while(cin>>s && s!=EOF)
        cout<<"("<<t[2*(s-1)]<<", "<<t[(2*(s-1))+1]<<")"<<endl;

    return 0;
}
