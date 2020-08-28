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

    int t,n,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>x;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);


        int c=0,i;

        for(i=0; i<n; i++)
        {
            if(x>a[i])
                c++;
            else
                break;
        }

        //cout<<c<<" c"<<endl;

        int z=c;



        for(  ; i<n; i++)
        {
            if(x<a[i])
            {
                c++;

                while(x<a[i])
                {
                    x=2*x;
                    c++;
                }
            }
            else
                c++;

            x=a[i]*2;

            //cout<<a[i]<<" "<<c<<" "<<x<<endl;
        }

        //cout<<c<<endl;


        while(z!=0)
        {

            int cc=0;
            z--;

            for(int i=z; i<n; i++)
            {
                if(x<a[i])
                {
                    cc++;

                    while(x<a[i])
                    {
                        x=2*x;
                        cc++;
                    }
                }
                else
                    cc++;

                x=a[i]*2;
            }

            //cout<<cc+z<<endl;

            c=min(c,cc+z);
        }

        cout<<c<<endl;



    }




    return 0;
}

