#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,m,x;
    while(cin>>k && k!=0)
    {

        cin>>m;
        map <int,int> ma;
        for(int i=0; i<k; i++)
        {
            cin>>x;
            ma[x]++;
        }
        int a,b,c,ans=0;
        for(int j=0; j<m; j++)
        {
            cin>>a>>b;
            c=0;
            for(int i=0; i<a; i++)
            {
                cin>>x;
                if(ma[x]!=0)
                    c++;
            }
            if(c<b)
            {
                ans=1;
            }


            //cout<<c<<endl;
        }
        if(ans==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;



    }

    return 0;
}

