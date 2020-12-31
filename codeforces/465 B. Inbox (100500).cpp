#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n,c=0;
    cin>>n;
    bool x,tmp,hp=0;


    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1 && hp==0)
        {
            c++;
            hp=1;
        }
        else if(x==1 && tmp==1)
        {
            c++;
        }
        else if(x==1 && tmp==0)
        {
            c=c+2;
        }

        tmp=x;
    }

    cout<<c<<endl;

    return 0;
}
