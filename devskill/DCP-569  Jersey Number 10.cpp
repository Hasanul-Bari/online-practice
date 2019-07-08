#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin>>n;
        int x=0;
        string ans;
        for(int i=0; i<n; i++)
        {
            string s;
            int y;
            cin>>s>>y;
            if(y>=x)
            {
                x=y;
                ans=s;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
