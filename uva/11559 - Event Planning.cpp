#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,h,w,p,x,ans,c,c1;
    while(cin>>n>>b>>h>>w)
    {
        ans=500001;
        for(int i=0; i<h; i++)
        {
            c=0,c1=0;
            cin>>p;
            if(n*p<=b && ans>n*p)
            {
                c=1;
            }
            for(int j=0; j<w; j++)
            {
                cin>>x;
                if(x>=n)
                {
                    c1=1;
                }
            }

            if(c1==1 && c==1)
                ans=n*p;
        }

        if(ans==500001)
            cout<<"stay home"<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
