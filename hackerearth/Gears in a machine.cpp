#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int c;

void dfs(int src,vector <int> adj[],int level[],bool visited[],int cc[],char ch[],int gear[])
{

    visited[src]=true;
    cc[src]=c;


    //cout<<src<<" ";

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {

            if(gear[x]==1)
            {
                if(ch[src]=='a')
                    ch[x]='c';
                else
                    ch[x]='a';
            }
            else
                ch[x]=ch[src];



            level[x]=level[src]+1;
            dfs(x,adj,level,visited,cc,ch,gear);

        }

    }

}

int main()
{
    faster

    int n,e,q;
    cin>>n>>e>>q;


    vector <int> adj[n+1];
    bool visited[n+1];
    int level[n+1];

    int gear[n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>gear[i];

        visited[i]=false;
        level[i]=0;
    }


    int u,v,d1,d2;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v;
        adj[u].pb(v);
        //adj[v].pb(u);

    }

    /*for(int i=1; i<=n; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<i<<" "<<adj[i][j]<<" ";
        }
        cout<<endl;
    }*/


    int cc[n+1];
    char ch[n+1];
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            ch[i]='a';

            dfs(i,adj,level,visited,cc,ch,gear);
            c++;
        }
    }






    /*for(int i=1; i<=n; i++)
    {
        cout<<i<<" "<<level[i]<<" "<<cc[i]<<" "<<ch[i]<<endl;
    }*/

    while(q--)
    {
        cin>>u>>v>>d1>>d2;

        if(cc[u]==cc[v])
        {
            if(ch[u]==ch[v] && d1==d2)
                cout<<"YES"<<endl;
            else if(ch[u]!=ch[v] && d1!=d2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }


    return 0;
}
/*
8 14
1 4
1 2
1 7
2 5
2 7
3 2
3 5
3 8
4 6
4 7
5 7
6 1
7 6
8 7
*/
