#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=20,u,v,t,d,src,k=1,hh;

    while(1)
    {

        vector <int> adj[n+1];

        for(int i=1; i<=19; i++)
        {
               hh=scanf("%d",&u);
               if(hh==EOF)
                    return 0;

            for(int j=0; j<u; j++)
            {
                cin>>v;
                adj[i].push_back(v);
                adj[v].push_back(i);
            }

        }


        /*for(int i=1; i<=n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }*/

        cout<<"Test Set #"<<k<<endl;
        k++;

        cin>>t;
        for(int h=0; h<t; h++)
        {
            cin>>src>>d;


            bool visited[n+1]= {false};
            int level[n+1];
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

            cout<<setw(2)<<src<<" to "<<setw(2)<<d<<": "<<level[d]<<endl;

            //cout<<level[d]<<endl;


        }
        cout<<endl;



    }

    return 0;


}


