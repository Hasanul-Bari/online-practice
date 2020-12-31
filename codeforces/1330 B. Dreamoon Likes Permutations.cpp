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

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];


        map<int,int> m;

        bool hp=false,hpp=false,c=false,c2=false;

        ll s=0,s1=0,ans=-1,x1=-1,x2=-1,y1=-1,y2=-1;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];


            if(m[a[i]]==1 && hp==false)
            {
                ans=i;
                hp=true;
                m.clear();
            }
            if(hp==false)
                s=s+a[i];
            else
            {
                if(m[a[i]]==1)
                    hpp=true;

                s1=s1+a[i];
            }





            m[a[i]]++;




        }



        //cout<<"ans : "<<ans<<endl;
        //cout<<s<<" ** "<<s1<<endl;
        if(s==(ans*(ans+1))/2  && s1== ((n-ans)*((n-ans)+1))/2 && ans!=-1 && hpp==false)
        {
            x1=ans;
            x2=n-ans;
            c=true;
            // cout<<"YES"<<endl;
        }



        m.clear();
        s=0,s1=0,ans=-1;
        hp=false,hpp=false;

        for(int i=n-1; i>=0; i--)
        {

            if(m[a[i]]==1 && hp==false)
            {
                ans=(n-1)-i;
                hp=true;
                m.clear();
            }
            if(hp==false)
                s=s+a[i];
            else
            {
                if(m[a[i]]==1)
                    hpp=true;

                s1=s1+a[i];
            }





            m[a[i]]++;


        }


        //cout<<"ans : "<<ans<<endl;
        //cout<<s<<" ** "<<s1<<endl;
        if(s==(ans*(ans+1))/2  && s1== ((n-ans)*((n-ans)+1))/2 && ans!=-1 && hpp==false)
        {
            y2=ans;
            y1=n-ans;
            c2=true;
            //cout<<"YES2"<<endl;
        }




        if(c==true && c2==true && x1!=y1  && x2!=y2 )
            cout<<2<<endl<<x1<<" "<<x2<<endl<<y1<<" "<<y2<<endl;
        else if(c==true)
            cout<<1<<endl<<x1<<" "<<x2<<endl;
        else if(c2==true)
            cout<<1<<endl<<y1<<" "<<y2<<endl;
        else
            cout<<0<<endl;
    }














    return 0;
}
