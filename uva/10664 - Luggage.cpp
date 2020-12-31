#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void subsum(vector<int> a,int s)
{

    int n=a.size();
    bool t[n+1][s+1];

    for(int i=0; i<=n; i++)
        t[i][0]=true;

    for(int i=1; i<=s; i++)
        t[0][i]=false;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=s; j++)
        {
            if(j<a[i-1])
                t[i][j]=t[i-1][j];
            else
                t[i][j]=t[i-1][j] || t[i-1][j-a[i-1]];
        }
    }


    /*for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=s; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }*/


    if(t[n][s]==true)
    {
        //bool elem[n]= {0};
        int nn=n,ss=s;

        int s1=0,s2=0;

        for(int i=n; i>0; i--)
        {
            if(t[i][ss]==true && t[i-1][ss]==false)
            {
                //elem[i-1]=true;
                s1=s1+a[i-1];
                ss=ss-a[i-1];
            }
            else
            {
                //elem[i-1]=false;
                s2=s2+a[i-1];
            }

            //cout<<a[i-1]<<"  ** "<<elem[i-1]<<endl;

        }

        //cout<<s1<<" "<<s2<<endl;
        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;




}




int main()
{
    //faster;


    int m,x,ans;
    cin>>m;
    getchar();
    string s,hp;
    while(m--)
    {
        getline(cin,s);
        ans=0;
        x=0;
        vector<int> v;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==' ')
            {
                ans=ans+x;
                v.pb(x);
                x=0;

            }
            else
            {
                x=(x*10)+(s[i]-48);

            }
        }
        v.pb(x);
        /*cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;*/


        ans=ans+x;
        //cout<<ans<<endl;
        if(ans%2==0)
        {
            //cout<<ans<<endl;
            ans=ans/2;
            subsum(v,ans);
        }
        else
            cout<<"NO"<<endl;




    }


    return 0;
}

