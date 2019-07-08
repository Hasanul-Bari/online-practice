#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n,k;
        cin>>n>>k;
        vector<long long> v;

        for(int j=0; j<n; j++)
        {
            long long a,b,c;
            cin>>a>>b>>c;

            if(a>=b && a>=c)
            {
                v.push_back(b);
                v.push_back(c);
            }

            else if(b>=a && b>=c)
            {
                v.push_back(a);
                v.push_back(c);
            }
            else if(c>=a && c>=b)
            {
                v.push_back(a);
                v.push_back(b);
            }
        }

        sort(v.begin(),v.end());

        long long sum=0;

        /*for(int j=0; j<v.size(); j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;*/


        for(int j=0; j<k; j++)
        {
            sum=sum+v[j];
        }

        cout<<sum<<endl;

    }
    return 0;
}
