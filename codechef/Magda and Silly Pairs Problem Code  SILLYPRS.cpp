#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int t,x;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> ae,ao;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x%2==0)
                ae.push_back(x);
            else
                ao.push_back(x);

        }

        ll s=0;
        int p=ae.size(),q=ao.size();
        int je=0,jo=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;


            if(x%2==0)
            {
                if(je<p)
                {
                    s=s+((x+ae[je])/2);
                    je++;
                    //cout<<x<<" 1* "<<ae[je]<<" "<<s<<endl;
                }
                else
                {
                    s=s+((x+ao[jo])/2);
                    jo++;
                    //cout<<x<<" 2* "<<ao[jo]<<" "<<s<<endl;
                }
            }
            else
            {
                if(jo<q)
                {
                    s=s+((x+ao[jo])/2);
                    jo++;
                    //cout<<x<<" 3* "<<ao[jo]<<" "<<s<<endl;
                }
                else
                {
                    s=s+((x+ae[je])/2);
                    je++;
                    //cout<<x<<" 4* "<<ae[je]<<" "<<s<<endl;
                }
            }
            //cout<<s<<endl;
        }


        cout<<s<<endl;
    }





    return 0;
}
