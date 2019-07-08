#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {

        int d;
        cin>>d;
        map<int,int> m;
        map<int,int> :: iterator it;
        int x,y;
        for(int i=1; i<=d; i++)
        {
            cin>>x>>y;
            m[x]=y;
        }
        int q;
        cin>>q;
        for(int i=1; i<=q; i++)
        {
            cin>>x>>y;
            int s=0;
            for(it=m.begin(); it!=m.end(); it++)
            {
                if(it->first<=x)
                    s=s+it->second;
            }
            //cout<<s<<endl;
            if(s>=y)
                cout<<"Go Camp"<<endl;
            else
                cout<<"Go Sleep"<<endl;
        }

    }
    return 0;
}
