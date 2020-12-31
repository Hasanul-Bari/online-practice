#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,c,x,y,s,ma,s1;
    while(cin>>a && a!=0)
    {
        cin>>c;
        cin>>y;
        s=0;
        s1=0;
        ma=y;
        s1=s1+(a-y);

        for(int i=1; i<c; i++)
        {
            cin>>x;
            if(x>y)
            {
                s=s+(x-y);
                ma=x;
            }

            if(x<y)
            {
                s1=s1+(y-x);
            }


            y=x;
        }

        if(ma!=a)
            s=s+(a-ma);


        //cout<<s<<" "<<s1<<endl;

        cout<<max(s1,s)<<endl;
    }
    return 0;
}
