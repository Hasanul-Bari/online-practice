#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,y,t;
    cin>>t;
    for(int j=0; j<t; j++)
    {

        cin>>n>>k;
        bool a[n+1]= {false};
        bool b[n+1]= {false};

        for(int i=0; i<k; i++)
        {
            cin>>x>>y;
            a[x]=true;
            b[y]=true;
        }
        int c1=0,c2=0;
        vector<int> u,v;
        for(int i=1; i<=n; i++)
        {
            if(a[i]==false)
            {
                u.push_back(i);
            }
            if(b[i]==false)
            {
                v.push_back(i);
            }
        }

        cout<<u.size()<<" ";
        for(int i=0; i<u.size(); i++)
            cout<<u[i]<<" "<<v[i]<<" ";

        cout<<endl;

    }






    return 0;
}

