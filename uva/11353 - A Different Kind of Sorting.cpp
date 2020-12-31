#include<bits/stdc++.h>
using namespace std;


int primefactorize(int n)
{
    int c=0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                c++;
                n=n/i;
            }
        }
    }
    if(n>1)
    {
        c++;
    }


    return c;
}



int main()
{
    multimap<int,int> m;
    multimap<int,int> :: iterator it;
    for(int i=1; i<=2000000; i++)
    {
        int x=primefactorize(i);
        m.insert(make_pair(x,i));
    }

    vector<int> a;
    for(it=m.begin(); it!=m.end(); it++)
    {
        int x=it->second;
        a.push_back(x);
    }

    int n,i=1;
    while(cin>>n && n!=0)
    {
        cout<<"Case "<<i<<": "<<a[n-1]<<endl;
        i++;
    }




    return 0;

}
