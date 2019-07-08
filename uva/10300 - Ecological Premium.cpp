#include<bits/stdc++.h>
#define ll     long long
#define ull    unsigned long long

using namespace std;

int main()
{
    int t,n,b;
    ull s,a,c;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        cin>>n;
        s=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b>>c;
            if(b!=0)
                s=s+(a*c);

        }
        cout<<s<<endl;
    }

    return 0;
}
