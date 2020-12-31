#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f && h!=0)
    {
        double c=0,in=u*(f/100.0);
        int i=0;
        while(c>=0 && c<h)
        {
            i++;
            c=c+u;
            if(c>h)
                break;
            c=c-d;
            u=u-in;
            if(u<0)
                u=0;
            //cout<<c<<" ";
        }
        //cout<<i<<" "<<c<<endl;
        if(c>h)
            cout<<"success on day "<<i<<endl;
        else
            cout<<"failure on day "<<i<<endl;

    }
    return 0;
}
