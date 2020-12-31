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
    double x;

    int coin[]= {10000,5000,2000,1000,500,200,100,50,20,10,5};

    vector<ll> ways[12];

    for(int i=0; i<=11; i++)
    {
        for(int j=0; j<=30005; j++)
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

    while(cin>>x)
    {
        if(x<0.0001)
            break;

        target=(x*100.0);

        double y=double(target)/100.0;

        if(y!=x)
            target++;

        //cout<<target<<endl;

        printf("%6.2lf%17lld\n",x,ways[11][target]);

    }



    return 0;
}

/*
11
10000
5000
2000
1000
500
200
100
50
20
10
5
*/

