#include<bits/stdc++.h>
using namespace std;

map< int, int> mm;
void primefactorize(int  n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                mm[i]++;
                n=n/i;
            }
        }
    }
    if(n>1)
    {
        mm[n]++;
    }

}



int main()
{
    int n,m,t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {


        cin>>m>>n;
        map< int, int> mm;

        for(int i=2; i*i<=m; i++)
        {
            if(m%i==0)
            {
                while(m%i==0)
                {
                    mm[i]++;
                    m=m/i;
                }
            }
        }

        if(m>1)
        {
            mm[m]++;
        }




        map< int, int> :: iterator it;
        vector<int> v;
        for(it=mm.begin(); it!=mm.end(); it++)
        {
            //cout<<it->first<<"^"<<it->second<<endl;
            int x=0,y=it->first;
            while(y<=n)
            {

                x=x+(n/y);
                y=y*it->first;
            }

            //cout<<x/it->second<<endl;
            int hp=x/it->second;
            v.push_back(hp);

        }
        sort(v.begin(),v.end());

        /*for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" * ";
        cout<<endl;*/
        cout<<"Case "<<k<<":"<<endl;

        if(v[0]==0)
            cout<<"Impossible to divide"<<endl;
        else
            cout<<v[0]<<endl;



    }








    return 0;


}
