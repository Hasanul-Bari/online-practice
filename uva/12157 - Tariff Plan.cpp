#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,j,t,x;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>n;
        m=0,j=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            m=m+(10* (ceil((double)(x/30.0))) );
            j=j+(15* (ceil((double)(x/60.0))) );

            if(x%30==0)
                m=m+10;
            if(x%60==0)
                j=j+15;
        }


        //cout<<m<<" "<<j<<endl;
        if(m<j)
            cout<<"Case "<<k<<": Mile "<<m<<endl;
        else if(j<m)
            cout<<"Case "<<k<<": Juice "<<j<<endl;
        else
            cout<<"Case "<<k<<": Mile Juice "<<m<<endl;

    }
    return 0;
}
