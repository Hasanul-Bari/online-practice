#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;
int main()
{
    int target;

    int coin[21];
    for(int i=1; i<=21; i++)
        coin[i-1]=i*i*i;


    vector<ll> ways[22];

    for(int i=0; i<=21; i++)
    {
        for(int j=0; j<=10005; j++)
        {
            if(i==0 && j==0)
                ways[i].push_back(1);

            else if(i==0)
                ways[i].push_back(0);

            else if(j-coin[i-1]<0)
            {
                ways[i].push_back(ways[i-1][j]);
            }
            else
            {
                ways[i].push_back(ways[i-1][j]+ways[i][j-coin[i-1]]);
            }
        }
    }

    while(cin>>target)
    {

        cout<<ways[21][target]<<endl;
    }


    return 0;
}



