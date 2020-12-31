#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

vector <int> adj[1005];
bool visited[1005];
int a[1005];

ll s,c;

void dfs(int src)
{

    visited[src]=true;
    c++;
    s=s+a[src];

    //cout<<src<<" =="<<endl;
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            dfs(x);
        }

    }

}

int main()
{
    faster

    int n,e,t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {

        cin>>n>>e;

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            visited[i]=false;
            adj[i].clear();
        }


        int u,v;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }


        ll ss=-1;
        s=0,c=0;
        bool hp=true;
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
            {
                dfs(i);

                //cout<<s<<" ** "<<c<<endl;

                if(s%c==0)
                {
                    if(ss==-1)
                        ss=s/c;
                    else if(ss!=(s/c))
                    {
                        hp=false;
                        break;
                    }
                }
                else
                {
                    hp=false;
                    break;
                }

                s=0,c=0;
            }
        }

        //cout<<hp<<endl;
        if(hp==true)
            cout<<"Case "<<k<<": Yes"<<endl;
        else
            cout<<"Case "<<k<<": No"<<endl;

    }


    return 0;
}


