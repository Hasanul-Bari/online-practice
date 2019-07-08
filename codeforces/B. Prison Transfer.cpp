#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,t,c,x;
    cin>>n>>t>>c;

    int cc=0,ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;

        if(x<=t)
        {
            cc++;
        }
        else
        {
            //cout<<cc<<endl;
            if(cc>=c)
                ans=ans+((cc-c)+1);


            cc=0;
        }
    }
    //cout<<cc<<endl;
    if(cc>=c)
        ans=ans+((cc-c)+1);


    cout<<ans<<endl;





    return 0;
}
