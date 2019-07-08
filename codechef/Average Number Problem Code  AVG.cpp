#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    long long s,x,ans,v,h;
    cin>>t;
    while(t--)
    {

        s=0;
        cin>>n>>k>>v;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            s=s+x;
        }

        ans=((v*(n+k))-s)/k;
        if(((v*(n+k))-s)<0)
            ans=-1;


        h=(s+(k*ans))/(n+k);
        //cout<<h<<" "<<v<<endl;
        if(h==v)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;

    }
    return 0;
}
