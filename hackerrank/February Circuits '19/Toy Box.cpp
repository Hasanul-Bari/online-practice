#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n,m,x,y,s=0;
    cin>>n>>m;
    map<int,int> mm;
    map<int,int> :: iterator it;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(mm[y]<x)
            mm[y]=x;

    }

    for(it=mm.begin(); it!=mm.end(); it++)
        s=s+it->second;


    cout<<s<<endl;
    return 0;

}
