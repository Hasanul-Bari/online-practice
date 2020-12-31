#include<bits/stdc++.h>
using namespace std;

map<string,string> p;

void printpath(string u,string s)
{
    if(u==s)
    {
        cout<<u[0];
        return ;
    }
    printpath(p[u],s);
    cout<<u[0];

}

int main()
{
    int e,t,T;
    cin>>T;
    for(int h=1; h<=T; h++)
    {
        cin>>e>>t;
        map <string, vector<string> > m;
        //map <string, vector<string> > :: iterator it;

        string u,v;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;

            m[u].push_back(v);
            m[v].push_back(u);


        }

        /*for(it=m.begin(); it!=m.end(); it++)
        {
            for(int j=0; j<it->second.size(); j++)
            {
                cout<<it->first<<" "<<it->second[j]<<" ";
            }
            cout<<endl;
        }*/


        for(int h=1; h<=t; h++)
        {

            string src,des;
            cin>>src>>des;


            queue <string> q;

            map<string,int> visited;
            map<string,int> level;

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
                        p[y]=x;

                    }
                }
            }

            //cout<<"**"<<endl;

            printpath(des,src);
            cout<<endl;

        }
        p.clear();

        if(h!=T)
            cout<<endl;

    }

    return 0;




}

