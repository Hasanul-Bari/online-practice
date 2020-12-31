#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

ll ways[6][30003];

int main()
{
    faster

    int target;
    int coin[5]= {1,5,10,25,50};



    while(cin>>target)
    {





        for(int i=0; i<=5; i++)
        {
            for(int j=0; j<=target; j++)
            {
                if(i==0 && j==0)
                    ways[i][j]=1;

                else if(i==0)
                    ways[i][j]=0;

                else if(j-coin[i-1]<0)
                {
                    ways[i][j]=ways[i-1][j];
                }
                else
                {
                    ways[i][j]=ways[i-1][j]+ways[i][j-coin[i-1]];
                }
            }
        }

        if(ways[5][target]!=1)
            cout<<"There are "<<ways[5][target]<<" ways to produce "<<target<<" cents change."<<endl;
        else
            cout<<"There is only 1 way to produce "<<target<<" cents change."<<endl;


    }



    return 0;
}
