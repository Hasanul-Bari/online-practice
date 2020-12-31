#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,k;
    cin>>n>>k;
    int a[n],b[k];


    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    for(int i=0; i<k; i++)
        cin>>b[i];

    sort(b,b+k,greater<int>());

    int c=0,j=0;

    if(a[0]==0)
    {
        a[0]=b[j];
        j++;
    }


    for(int i=1; i<n; i++)
    {
        if(a[i]==0)
        {
            a[i]=b[j];
            j++;
        }

        //cout<<a[i-1]<<" "<<a[i]<<endl;

        if(a[i-1]>=a[i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




    return 0;
}
