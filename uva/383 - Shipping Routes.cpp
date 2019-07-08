#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cout<<"SHIPPING ROUTES OUTPUT"<<endl<<endl;

    int n,e,p,t;
    cin>>t;
    for(int h=1; h<=t; h++)
    {
        cout<<"DATA SET  "<<h<<endl<<endl;

        cin>>n>>e>>p;
        map <string, vector<string> > m;

        string u,v;

        for(int i=0; i<n; i++)
            cin>>u;

        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            if(u!=v)
            {
                m[u].push_back(v);
                m[v].push_back(u);


            }
            else
                m[u].push_back(v);
        }


        int cost;
        string src,des;

        for(int k=1; k<=p; k++)
        {

            cin>>cost>>src>>des;


            queue <string> q;

            map<string,int> visited;
            map<string,int> level;
            // map<string,int> :: iterator itr;


            visited[src]=1;

            q.push(src);

            while(q.empty()!=1)
            {
                string x=q.front();
                q.pop();
                for(int i=0; i<m[x].size(); i++)
                {
                    string y=m[x][i];
                    if(visited[y]==0)
                    {
                        visited[y]=1;
                        level[y]=level[x]+1;
                        q.push(y);
                    }
                }
            }

            /*for(itr=level.begin(); itr!=level.end(); itr++)
            {
                cout<<itr->first<<" "<<itr->second<<endl;
            }*/

            if(src!=des && level[des]==0)
            {
                cout<<"NO SHIPMENT POSSIBLE"<<endl;
            }
            else
            {
                cout<<"$"<<level[des]*100*cost<<endl;
            }



        }
        cout<<endl;

    }

    cout<<"END OF OUTPUT"<<endl;
    return 0;


}


