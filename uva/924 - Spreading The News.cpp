#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,u,v,c,d,t;
    cin>>n;
    vector <int> adj[n];


    for(int i=0; i<n; i++)
    {
        cin>>u;
        for(int j=0; j<u; j++)
        {
            cin>>v;
            adj[i].push_back(v);
            //adj[v].push_back(i);
        }
    }


   /* for(int i=0; i<n; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cin>>t;
    for(int j=0; j<t; j++ )
    {

        int src;
        cin>>src;
        c=0;
         map<int,int> m;
        map<int,int> :: iterator it;


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
                    c++;
                    m[level[y]]++;
                }
            }
        }

        //cout<<c<<endl;
        if(c==0)
            cout<<0<<endl;

        else
        {
            c=0;
            for(it=m.begin(); it!=m.end(); it++)
            {
                if(it->second>c)
                {
                    c=it->second;
                    d=it->first;
                }
            }

            cout<<c<<" "<<d<<endl;

        }


    }
    return 0;


}


