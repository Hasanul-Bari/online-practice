#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,k,t;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int s=0,max=0;
        for(int i=1; i<=n; i++)
        {
            s=0;
            for(int j=i; j<=n; j=j+k)
            {
                s=s+a[j];
            }
            if(max<s)
                max=s;
        }

        cout<<max<<endl;


    }




    return 0;
}
