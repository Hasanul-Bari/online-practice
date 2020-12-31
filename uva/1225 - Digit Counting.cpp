#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int t,n;
    cin>>t;

    int a[10];

    while(t--)
    {
        for(int i=0; i<10; i++)
            a[i]=0;


        cin>>n;

        for(int i=1; i<=n; i++)
        {
            int x=i;

            while(x!=0)
            {
                a[x%10]++;
                x=x/10;
            }
        }


        for(int i=0; i<10; i++)
        {

            if(i==9)
                cout<<a[i]<<endl;
            else
                cout<<a[i]<<" ";
        }




    }




    return 0;
}
