#include<bits/stdc++.h>
using namespace std;


class node
{
public:
    int name;
    int cost;

    node() {}

    node(int n,int c)
    {
        name=n;
        cost=c;
    }

};

bool operator<(node a,node b)   ///makes the priority queue as min cost node at top
{
    return b.cost<a.cost;
}

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n,des,t,e,k;

    cin>>k;
    for(int h=1; h<=k; h++)
    {

        cin>>n>>des>>t>>e;
        vector <int> adj[n+1];
        vector <int> w[n+1];

        int u,v,z;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v>>z;
            adj[u].push_back(v);
            w[u].push_back(z);

        }
        int c=0;
        for(int src=1; src<=n; src++)
        {

            long long d[n+1];

            for(int i=1; i<=n; i++)
                d[i]=1e18;
            d[src]=0;


            node srcn(src,d[src]);

            priority_queue <node> q;

            q.push(srcn);

            while(q.empty()!=1)
            {
                node top=q.top();
                int u=top.name;

                q.pop();
                for(int i=0; i<adj[u].size(); i++)
                {
                    int v=adj[u][i];
                    if(d[u]+w[u][i]<d[v])
                    {
                        d[v]=d[u]+w[u][i];

                        node temp(v,d[v]);

                        q.push(temp);
                    }
                }
            }


            if(d[des]<=t)
                c++;

            /*for(int i=1; i<=n; i++ )
                cout<<i<<" ->"<<d[i]<<endl;*/

        }
        if(h==k)
            cout<<c<<endl;
        else
            cout<<c<<endl<<endl;

    }


    return 0;
}


