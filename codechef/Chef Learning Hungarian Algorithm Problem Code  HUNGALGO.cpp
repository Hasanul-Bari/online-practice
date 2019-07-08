#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,t;
    cin>>t;
    while(t--)
    {


        cin>>n;
        int a[n][n];

        bool r[n]= {false},c[n]= {false};


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];

                if(a[i][j]==0)
                {
                    r[i]=true;
                    c[j]=true;
                }

            }
        }

        bool ans=true;
        for(int i=0; i<n; i++)
        {
            //cout<<r[i]<<" "<<c[i]<<endl;

            if(r[i]==false)
            {
                ans=false;
                break;
            }
            if(c[i]==false)
            {
                ans=false;
                break;
            }
        }

        if(ans==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }





    return 0;
}
