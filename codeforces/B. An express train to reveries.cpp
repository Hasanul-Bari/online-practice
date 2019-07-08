#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;
    int a[n+1],b[n+1],p[n+1];

    int ca[n+1]= {0};
    int cb[n+1]= {0};
    /*for(int i=1; i<=n; i++)
    {
        ca[i]=-1;
        cb[i]=-1;

    }*/

    int a1,a2;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(ca[a[i]]!=0)
        {
            a1=ca[a[i]];
            a2=i;
        }
        ca[a[i]]=i;



    }

    int b1,b2;
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
        if(cb[b[i]]!=0)
        {
            b1=cb[b[i]];
            b2=i;
        }
        cb[b[i]]=i;
    }

    //cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl;


    vector<int> v;
    int ma,mb;

    for(int i=1; i<=n; i++)
    {
        if(ca[i]==0)
            ma=i;
        if(cb[i]==0)
            mb=i;

        if(a[i]==b[i])
            p[i]=a[i];

    }

    //cout<<ma<<" "<<mb<<endl;

    if(ma==mb)
    {
        if(a1==b1)
        {
            p[a1]=ma;
        }
        else if(a1==b2)
        {
            p[a1]=ma;

        }
        else if(a2==b1)
        {
            p[a2]=ma;
        }
        else if(a2==b2)
        {
            p[a2]=ma;
        }
    }
    else if(a[a1]==mb && a[a2]==mb && b[b1]==ma && b[b2]==ma)
    {
        p[a1]=ma;
        p[a2]=mb;
    }
    else
    {



        if(b[a1]==ma)
            p[a1]=ma;
        if(b[a2]==ma)
            p[a2]=ma;

        if(a[b1]==mb)
            p[b1]=mb;
        if(a[b2]==mb)
            p[b2]=mb;

    }




    for(int i=1; i<=n; i++)
        cout<<p[i]<<" ";
    cout<<endl;




    return 0;
}
