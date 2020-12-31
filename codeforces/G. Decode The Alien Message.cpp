#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int t,n,i=1,x;
    cin>>t;

    while(t--)
    {
        cin>>n;
        string s;
        int hp=0;
        while(n--)
        {
            cin>>x;
            if(x%2==0)
            {
                s=s+'1';
                hp=1;
            }
            else if(hp==1)
            {
                s=s+'0';
            }
        }
        cout<<"Case "<<i<<": "<<s<<endl;
        i++;
    }

    return 0;
}
