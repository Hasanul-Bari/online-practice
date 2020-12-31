#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    int n;
    long long a,b,tempa,tempb,ans;
    multimap<long long,long long> m;
    multimap<long long,long long> :: iterator it;

    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            m.insert(make_pair(a,b));

        }
        ans=2;
        int i=0;
        for(it=m.begin(); it!=m.end(); it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            if(i==0)
            {
                tempa=it->first;
                tempb=it->second;
                i=1;
            }
            else
            {
                if(it->first>tempb)
                    ans++;

                if(it->first==tempa)
                {
                    if(it->second>tempb)
                        tempb=it->second;
                }
                else
                {
                    tempa=it->first;
                    tempb=it->second;
                }

            }
        }
        cout<<ans<<endl;


    }


    return 0;
}

