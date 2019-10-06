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

vector<edge> g;


int find_set(int a)
{
    if(a==p[a])
        return a;

    return p[a]=find_set(p[a]);

}



int kruskal(int n)
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

    return total;


}



int main()
{
    faster

    int n,e;

    cin>>n>>e;


    int u,v,w;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v>>w;

        edge ed;
        ed.u=u;
        ed.v=v;
        ed.w=w;

        g.push_back(ed);
    }

    cout<<kruskal(n)<<endl;;

    return 0;
}


