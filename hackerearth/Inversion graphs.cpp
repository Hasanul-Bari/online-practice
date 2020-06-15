#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


int fun(int a[],int n)
{

    int mx = INT_MAX;

    vector<int> d(n+1, mx);
    d[0] = -mx;

    for(int i = 0; i < n; i++)
    {
        int j=upper_bound(d.begin(), d.end(), a[i]) - d.begin();


        if (d[j-1]<a[i] && a[i]<d[j])
            d[j] = a[i];
    }

    int ans = 0;
    for (int i=0; i<=n; i++)
    {
        if(d[i]<mx)
            ans=i;
    }
    return ans;
}





int main()
{
    faster
    int n;
    cin>>n;

    int b[n],a[n];

    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<n; i++)
    {
        a[i]=b[(n-1)-i];
    }





    /*int c=1,mx=1;
    for(int i=1; i<n; i++)
    {
        if(a[i]<a[i-1])
            c++;
        else
        {
            c=1;
        }

        if(c>mx)
            mx=c;
    }

    cout<<mx<<endl;*/



    cout<<fun(a,n)<<endl;;




    return 0;
}
