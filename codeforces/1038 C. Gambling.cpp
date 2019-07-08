#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    int a[n],b[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
        cin>>b[i];

    sort(a,a+n);
    sort(b,b+n);

    ll aa=0,bb=0;
    int la=n-1,lb=n-1;

    while(la>=0 || lb>=0)
    {

        if(la>=0 && lb>=0)
        {
            if(a[la]>=b[lb])
            {
                aa=aa+a[la];
                la--;
            }
            else
                lb--;
        }
        else if(la<0)
        {
            lb--;
        }
        else if(lb<0)
        {
            aa=aa+a[la];
            la--;
        }


        if(la>=0 && lb>=0)
        {
            if(a[la]<=b[lb])
            {
                bb=bb+b[lb];
                lb--;
            }
            else
                la--;
        }
        else if(la<0)
        {
            bb=bb+b[lb];
            lb--;
        }
        else if(lb<0)
        {
            la--;
        }
        //cout<<aa<<" "<<bb<<" "<<la<<" "<<lb<<endl;
    }

    //cout<<aa<<" "<<bb<<endl;

    cout<<aa-bb<<endl;




    return 0;
}
