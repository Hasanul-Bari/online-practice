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
    int temp=x,ans=0,min=x,hp=0;

    for(int i=2; i<=n; i++)
    {
        cin>>x;

        if(hp==1 && ans!=-1)
        {
            if(min>=x && temp<=x)
                ans++;
            else
                ans=-1;
        }

        if(temp>x && hp==0)
        {
            if(min>=x)
            {
                ans++;
            }
            else
                ans=-1;

            hp=1;

            //cout<<"hp"<<endl;
        }




        temp=x;


    }

    cout<<ans<<endl;


    return 0;
}

