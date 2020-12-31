#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

map<string,string> p;
map<string,int> sz;

string find_set(string v)
{
    if(v==p[v])
        return v;

    return p[v]=find_set(p[v]);
}

int union_set(string a,string b)
{
    string u=find_set(a);
    string v=find_set(b);

    if(u!=v)
    {
        if(sz[u]<sz[v])
            swap(u,v);

        p[v]=u;
        sz[u]=sz[u]+sz[v];
    }

    //cout<<sz[u]<<endl;

    return sz[u];

}

int main()
{
    faster

    int n,t;
    cin>>t;
    while(t--)
    {


        cin>>n;

        string a,b;

        for(int i=1; i<=n; i++)
        {
            cin>>a>>b;

            if(sz[a]==0)
            {
                p[a]=a;
                sz[a]=1;
            }

            if(sz[b]==0)
            {
                p[b]=b;
                sz[b]=1;
            }

            cout<<union_set(a,b)<<endl;
        }

        p.clear();
        sz.clear();



    }
    return 0;
}

