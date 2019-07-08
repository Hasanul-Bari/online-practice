#include<bits/stdc++.h>
using namespace std;

int main()
{
    long l,h,ans,max;
    while(cin>>l>>h && l!=0 && h!=0)
    {

        if(l>h)
            swap(l,h);

        max=0;

        for(long i=l; i<=h; i++)
        {

            long x,c;
            x=i;
            c=0;
            while(1)
            {
                if(x%2==0)
                    x=x/2;
                else
                    x=(3*x)+1;

                c++;
                if(x==1)
                    break;
            }
            if(max<c)
            {
                max=c;
                ans=i;
            }

            //cout<<c<<endl;

        }

        //cout<<ans<<" "<<max<<endl;
        cout<<"Between "<<l<<" and "<<h<<", "<<ans<<" generates the longest sequence of "<<max<<" values."<<endl;

    }
    return 0;
}
