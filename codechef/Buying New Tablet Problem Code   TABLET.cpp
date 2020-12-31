#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int t,n,b,w,h,p,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        a=0;
        for(int i=0; i<n; i++)
        {
            cin>>w>>h>>p;
            if(p<=b)
            {
                if(w*h>a)
                    a=w*h;
            }
        }
        if(a==0)
            cout<<"no tablet"<<endl;
        else
            cout<<a<<endl;

    }
    return 0;
}
