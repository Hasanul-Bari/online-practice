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

    while(t--)
    {
        cin>>n;

        int x=1;

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(i==0 && j==0)
                    cout<<"O";
                else
                {
                    if(x<n)
                    {
                        cout<<".";
                        x++;
                    }
                    else
                        cout<<"X";
                }

            }
            cout<<endl;
        }

    }




    return 0;
}
