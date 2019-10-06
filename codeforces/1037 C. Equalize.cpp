#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    string x,y;
    cin>>n>>x>>y;

    vector<int> v0,v1;
    for(int i=0; i<n; i++)
    {
        if(x[i]!=y[i])
        {
            if(x[i]=='0')
                v0.push_back(i);
            else
                v1.push_back(i);

        }
    }






    return 0;
}
