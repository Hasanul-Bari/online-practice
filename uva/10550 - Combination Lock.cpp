#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,a,b,c;
    while(cin>>p>>a>>b>>c)
    {
        if(p==0 && a==0 && b==0 && c==0)
            break;


        int ans=0;
        if(p>=a)
            ans=ans+(p-a);
        else
            ans=ans+((p+40)-a);

        if(a<=b)
            ans=ans+(b-a);
        else
            ans=ans+((b+40)-a);


        if(b>=c)
            ans=ans+(b-c);
        else
            ans=ans+((b+40)-c);


        ans=ans*9;
        ans=ans+(360*3);

        cout<<ans<<endl;
    }
    return 0;
}
