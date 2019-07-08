#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=1,x,s,av;
    while(cin>>n && n!=0)
    {
        int a[n];
        s=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        av=s/n;
        //cout<<av<<endl;

        int ans=0;

        for(int i=0; i<n; i++)
        {
            ans=ans+abs(av-a[i]);
        }

        cout<<"Set #"<<k<<endl;
        cout<<"The minimum number of moves is "<<ans/2<<"."<<endl;
        k++;
        cout<<endl;


    }
    return 0;
}

