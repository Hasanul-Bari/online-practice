#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int x;
    cin>>x;


    if(x<=36)
    {
        if(x%2==0)
        {
            for(int i=1; i<=x/2; i++)
                cout<<8;
            cout<<endl;
        }
        else
        {
            for(int i=1; i<=x/2; i++)
                cout<<8;
            cout<<6<<endl;
        }
    }
    else
        cout<<-1<<endl;




    return 0;
}
