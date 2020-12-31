#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,k,x;
    cin>>n>>k;
    string s;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>s;
        x=s.length();
        a[i]=x;
    }
    cin>>s;
    x=s.length();

    sort(a,a+n);

    int b=lower_bound(a,a+n,x)-a;
    //cout<<b<<" ";
    b=b+((b/k))*5;

    int w=upper_bound(a,a+n,x)-a;
    w--;
    //cout<<w<<endl;
    w=w+((w/k))*5;




    cout<<b+1<<" "<<w+1<<endl;


    return 0;
}

