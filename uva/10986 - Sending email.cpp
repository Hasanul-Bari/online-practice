#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int h=1; h<=t; h++)
    {

        int n,e,src,des;
        cin>>n>>e>>src>>des;
        vector <int> adj[n];
        vector <int> cost[n];

        int u,v,w;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v>>w;
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);

        }

        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                cout<<adj[i][j]<<" ("<<cost[i][j]<<")    ";
            }
            cout<<endl;
        }*/


        int d[n];
        for(int i=0; i<n; i++)
            d[i]=INT_MAX;


        priority_queue <int> q;

        //visited[src]=true;
        d[src]=0;

        q.push(src);

        while(q.empty()!=1)
        {
            int x=q.top();
            q.pop();
            for(int i=0; i<adj[x].size(); i++)
            {
                int y=adj[x][i];
                if(d[x]+cost[x][i]<d[y])
                {
                    d[y]=d[x]+cost[x][i];
                    q.push(y);
                }
            }
        }

        /*for(int i=0; i<n; i++)
        {
            cout<<i<<" "<<d[i]<<endl;
        }*/
        cout<<"Case #"<<h<<": ";
        if(d[des]==INT_MAX)
            cout<<"unreachable"<<endl;
        else
            cout<<d[des]<<endl;

    }

    return 0;

}
