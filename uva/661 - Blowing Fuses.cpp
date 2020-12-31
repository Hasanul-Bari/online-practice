#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c,x,k=0;
    while(cin>>n>>m>>c && n!=0 && m!=0 && c!=0)
    {
        k++;
        vector<int> v[n];
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v[i].push_back(x);
            v[i].push_back(0);


        }

        /*for(int i=0; i<n; i++)
        {
            cout<<v[i][0]<<" "<<v[i][1]<<endl;
        }*/
        int ans=0,max=0;
        for(int i=0; i<m; i++)
        {
            cin>>x;
            if(v[x-1][1]==0)
            {
                ans=ans+v[x-1][0];
                v[x-1][1]=1;
            }
            else
            {
                ans=ans-v[x-1][0];
                v[x-1][1]=0;
            }

            if(max<ans)
                max=ans;
        }
        //cout<<max<<endl;
        cout<<"Sequence "<<k<<endl;
        if(max>c)
            cout<<"Fuse was blown."<<endl;
        else
        {
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes."<<endl;
        }

        cout<<endl;

    }
    return 0;

}
