#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int t;
    cin>>t;
    ll x,n,ans,max,c,z,temp;
    while(t--)
    {
        map<ll,ll> m;
        cin>>n;
        ans=0,max=0,c=0,z,temp;
        bool hp=false;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            c++;
            if(m[x]>0)
            {

                z=m[x];
                m[x]=i;
                //cout<<i-z<<" ** "<<endl;
                if(hp==false)
                {
                    c=i-z;
                    hp=true;
                    temp=z;
                }
                else if(temp<z && hp==true)
                {
                    c=i-z;
                    temp=z;
                }


            }
            else
            {
                m[x]=i;
            }

            if(c>max)
                max=c;

            //cout<<"temp = "<<temp<<endl;
            //cout<<"c= "<<c<<endl;

        }

        cout<<max<<endl;

    }

    return 0;
}

/*
1
26
9
12
16
1
13
5
9
1
7
23
10
15
26
22
23
12
28
1
19
9
17
3
3
6
7
22
*/
