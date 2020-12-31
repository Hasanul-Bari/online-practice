#include<bits/stdc++.h>
using namespace std;

double binomial_coefficient(double p,double q, double r, double s)
{
    double ans=1.0;
    if(q>p-q)
        q=p-q;

    if(s>r-s)
        s=r-s;
    double x=min(q,s);
    //cout<<x<<endl;

    for(double i=0; i<x; i++)
    {
        ans=ans*(p-i);
        //ans=ans/(i+1);
        //ans=ans*(i+1);
        ans=ans/(r-i);
        //cout<<p-i<<" * "<<endl;

    }
    double y=max(q,s);
    //cout<<ans<<endl;

    if(q>=s)
    {
        for(double i=x; i<y; i++)
        {
            ans=ans*(p-i);
            ans=ans/(i+1);

            //printf("%0.5lf\n",ans);
        }
    //cout<<ans<<endl;
    }


    else if(q<s)
    {
        for(double i=x; i<y; i++)
        {
            ans=ans*(i+1);
            ans=ans/(r-i);


            //printf("%0.5lf hp \n",ans);
        }
    }


    return ans;
}

int main()
{
    double p,q,r,s;
    while(cin>>p>>q>>r>>s)
    printf("%0.5lf\n",binomial_coefficient(p,q,r,s));

    return 0;
}

