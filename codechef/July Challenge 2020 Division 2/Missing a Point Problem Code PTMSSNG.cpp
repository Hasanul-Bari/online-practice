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

    int t,n,x,y;
    cin>>t;

    while(t--)
    {
        cin>>n;

        map<int,int> mx,my;
        map<int,int> :: iterator it;

        n=4*n-1;

        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            mx[x]++;
            my[y]++;
        }

        for(it=mx.begin(); it!=mx.end(); it++)
        {
            if((it->second)%2!=0)
                x=it->first;
        }

        for(it=my.begin(); it!=my.end(); it++)
        {
            if((it->second)%2!=0)
                y=it->first;
        }

        cout<<x<<" "<<y<<endl;


    }




    return 0;
}

/*
1
2
1 1
1 2
2 2
2 1
9 6
9 3
4 3

*/
