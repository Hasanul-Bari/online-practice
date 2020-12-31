#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        int c=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(i>=1)
            {
                for(int j=i-1; j>=0; j--)
                {
                    if(a[i]>=a[j])
                        c++;
                }

            }

        }
        cout<<c<<endl;


    }




    return 0;
}
