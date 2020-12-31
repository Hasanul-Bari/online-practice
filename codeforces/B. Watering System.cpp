#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,A,B;
    cin>>n>>A>>B;

    int x;
    cin>>x;
    int s=0;
    s=s+x;

    int a[n-1];
    for(int i=0; i<n-1; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }


    sort(a,a+(n-1));

    if((x*A)/s>=B)
        cout<<0<<endl;
    else
    {
        int c=0;
        for(int i=n-2; i>=0; i--)
        {
            s=s-a[i];
            c++;
            if((x*A)/s>=B)
                break;
        }

        cout<<c<<endl;
    }


    return 0;
}
