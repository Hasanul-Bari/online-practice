#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster


    int n,x,y,t;
    cin>>n;

    map<int,int> m,m1,m3;

    for(int i=1; i<=n; i++)
    {
        cin>>x>>y;

        if(y!=0)
        {
            m[x]=y;



        }
        else
        {
            t=x;
        }



    }




    if(n%2==0)
    {
        int tt=t;

        while(m1[tt]!=0)
        {
            tt=m1[tt];
        }
        //cout<<t<<" **"<<tt<<endl;

        bool hp=false;
        int a=m[0],b=tt;

        for(int i=1; i<=n; i++)
        {
            if(hp==true)
            {
                cout<<a<<" ";
                a=m[a];
                hp=false;
            }
            else
            {
                cout<<b<<" ";
                b=m[b];
                hp=true;
            }
        }
        cout<<endl;
    }
    else
    {
        int tt=0;

        while(m1[tt]!=0)
        {
            tt=m1[tt];

        }



    }






    return 0;
}
