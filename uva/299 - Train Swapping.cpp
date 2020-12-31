#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int c=0;
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<n-i; j++)
            {
                if(a[j+1]<a[j])
                {
                    swap(a[j+1],a[j]);
                    //cout<<a[j]<<" "<<a[j+1]<<endl;
                    c++;

                }
            }

        }

        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;

    }











    return 0;
}
