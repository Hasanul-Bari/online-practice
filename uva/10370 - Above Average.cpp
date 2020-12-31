#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

int main()
{
    int t,x,n;
    char hp='%';
    double av,s;
    sf("%d",&t);
    for(int i=0; i<t; i++ )
    {
        s=0;
        scanf("%d",&n);
        double a[n];
        for(int j=0; j<n; j++)
        {
            sf("%lf",&a[j]);
            s=s+a[j];
        }
        av=s/(double)(n);

        int c=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]>av)
                c++;
        }
        //cout<<c<<" "<<av<<" "<<s<<endl;

        double ans=((double)(c)/(double)(n))*100.00;

        pf("%.3lf%c\n",ans,hp);


    }
    return 0;
}

