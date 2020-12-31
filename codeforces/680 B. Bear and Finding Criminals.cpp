#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,x;
    cin>>n>>x;
    bool a[n+1],s=0,e=0;

    for(int i=1; i<=n; i++)
        cin>>a[i];

    int ans=0;
    if(a[x]==1)
        ans++;

    for(int i=x-1,j=x+1;  ; i--,j++)
    {
        if(i==0)
            s=1;
        if(j==n+1)
            e=1;

        if(s==0 && e==0)
        {
            if(a[i]==1 && a[j]==1)
                ans=ans+2;
        }
        else if(s==1 && e==0)
        {
            if(a[j]==1)
                ans++;
        }
        else if(s==0 && e==1)
        {
            if(a[i]==1)
                ans++;
        }
        else if(s==1 && e==1)
            break;


        //cout<<a[i]<<" "<<a[j]<<endl;



    }

    cout<<ans<<endl;




    return 0;
}
