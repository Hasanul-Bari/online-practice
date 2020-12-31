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
    int t,n,k=1;
    cin>>t;

    int x,y,z,a,b,c,p,q,r,p1,q1,r1;

    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>x>>y>>z>>a>>b>>c;

            if(i==0)
            {
                p=x, q=y, r=z;
                p1=a, q1=b, r1=c;
            }
            else
            {
                if(p<x)
                    p=x;
                if(q<y)
                    q=y;
                if(r<z)
                    r=z;

                if(p1>a)
                    p1=a;
                if(q1>b)
                    q1=b;
                if(r1>c)
                    r1=c;

            }


        }

        ll s=(p1-p)*(q1-q)*(r1-r);

        if(s<0)
            s=0;

        cout<<"Case "<<k<<": "<<s<<endl;
        k++;
    }




    return 0;
}
