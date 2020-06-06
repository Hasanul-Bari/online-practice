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

    int n;
    cin>>n;

    int a[n];
    map<int,int> m;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(m[a[i]]==0)
            m[a[i]]=i+1;
    }

    int mx=-1;
    for(int i=n-1; i>=0; i--)
    {
        if((i+1)>=m[a[i]])
        {
            int z=((i+1)-m[a[i]])+1;
            if(mx<z)
                mx=z;

        }



    }

    cout<<mx<<endl;




    return 0;
}
