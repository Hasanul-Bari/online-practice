#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

bool visited[105];     // default initialize to false/0


stack<int> s;


void dfs(vector<int> adj[],int src)
{

    visited[src]=true;

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            dfs(adj,x);
        }

    }

    s.push(src);

}

int main()
{
    faster

    int n,e;
    while(1)
    {
        cin>>n>>e;
        if(n==0 && e==0)
            break;

        vector<int> adj[n+1];

        int u,v;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);    ///directed edge
        }

        for(int i=1; i<=n; i++)
            visited[i]=false;


        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
                dfs(adj,i);
        }


        while(s.size()>1)
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<s.top()<<endl;
        s.pop();




    }
    return 0;
}


