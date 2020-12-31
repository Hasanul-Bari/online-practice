#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e,c,src,u,v;
    while(cin>>n && n!=0)
    {
        cin>>e;

        vector <int> adj[n];
        multimap <int,int> m;
        multimap <int,int> :: iterator it;

        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            m.insert(make_pair(u,v));
            if(u!=v)
            {
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
            else
                adj[u].push_back(v);
        }

        src=0;

        bool visited[n]= {false};
        int level[n];
        queue <int> q;

        visited[src]=true;
        level[src]=0;

        q.push(src);

        while(q.empty()!=1)
        {
            int x=q.front();
            q.pop();
            for(int i=0; i<adj[x].size(); i++)
            {
                int y=adj[x][i];
                if(visited[y]==false)
                {
                    visited[y]=true;
                    level[y]=level[x]+1;
                    q.push(y);
                }
            }
        }

        c=0;
        for(it=m.begin(); it!=m.end(); it++)
        {
            u=it->first;
            v=it->second;

            if(level[u]==level[v])
            {
                c=1;
                break;
            }

        }

        if(c==1)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;


    }

    return 0;


}


