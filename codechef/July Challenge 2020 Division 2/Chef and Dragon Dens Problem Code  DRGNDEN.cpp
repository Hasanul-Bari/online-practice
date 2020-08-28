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

    int n,q;
    cin>>n>>q;

    int h[n],a[n];

    for(int i=0; i<n; i++)
        cin>>h[i];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int b,c,k;
    while(q--)
    {
        cin>>k>>b>>c;

        if(k==1)
            a[b-1]=c;
        else
        {


            if(b>c)
                swap(b,c);

            b--,c--;
            int p=h[b],q=h[c];

            if(p<=q)
            {
                ll s=0;
                for(int i=b; i<=c; i++)
                {
                    if(h[i]>=p && h[i]<=q)
                    {
                        s=s+a[i];
                        p=h[i];
                    }
                    else if(h[i]>q)
                    {
                        s=-1;
                        break;
                    }

                    //cout<<s<<" "<<p<<" "<<q<<" "<<h[i]<<endl;
                }
                cout<<s<<endl;
            }
            else
            {
                ll s=0;
                for(int i=c; i>=b; i--)
                {
                    if(h[i]>=q && h[i]<=p)
                    {
                        s=s+a[i];
                        q=h[i];
                    }
                    else if(h[i]>p)
                    {
                        s=-1;
                        break;
                    }

                    //cout<<s<<" "<<p<<" "<<q<<" "<<h[i]<<endl;
                }
                cout<<s<<endl;
            }


        }
    }




    return 0;
}
