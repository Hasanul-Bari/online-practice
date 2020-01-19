#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

map<int,int> p;

class edge
{
public:
    int u,v,w;
};

bool comparator(edge a,edge b)
{
    return a.w<b.w;
}


bool comparator2(edge a,edge b)
{
    return a.w>b.w;
}



vector<edge> g;

int find_set(int a)
{
    if(a==p[a])
        return a;

    return p[a]=find_set(p[a]);

}

ll kruskal(int n)
{
    for(int i=1; i<=n; i++)
        p[i]=i;

    sort(g.begin(),g.end(),comparator);

    int count=0,total=0;


    int u,v;
    for(int i=0; i<g.size(); i++)
    {
        u=find_set(g[i].u);
        v=find_set(g[i].v);

        if(u!=v)
        {
            p[u]=v;

            //cout<<g[i].u<<" -- "<<g[i].v<<endl;
            count++;
            total=total+g[i].w;

            if(count==n-1)
                break;
        }
    }
    p.clear();
    return total;
}

ll kruskal2(int n)
{
    for(int i=1; i<=n; i++)
        p[i]=i;

    sort(g.begin(),g.end(),comparator2);

    int count=0;
    ll total=0;


    int u,v;
    for(int i=0; i<g.size(); i++)
    {
        u=find_set(g[i].u);
        v=find_set(g[i].v);

        if(u!=v)
        {
            p[u]=v;

            //cout<<g[i].u<<" -- "<<g[i].v<<endl;
            count++;
            total=total+g[i].w;

            if(count==n-1)
                break;
        }
    }
    p.clear();
    return total;
}


int main()
{
    faster

    int n,t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {

        cin>>n;
        n++;

        int u,v,w;
        while(1)
        {
            cin>>u>>v>>w;

            if(u==0 && v==0 && w==0)
                break;

            edge ed;
            ed.u=u;
            ed.v=v;
            ed.w=w;

            g.push_back(ed);
        }

        //cout<<kruskal(n)<<endl;
        //cout<<kruskal2(n)<<endl;

        ll x=kruskal(n);
        x=x+kruskal2(n);

        //cout<<x<<endl;

        if(x%2==0)
            cout<<"Case "<<k<<": "<<x/2<<endl;
        else
            cout<<"Case "<<k<<": "<<x<<"/2"<<endl;

        g.clear();


    }

    return 0;
}


