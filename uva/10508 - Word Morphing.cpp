#include<bits/stdc++.h>
using namespace std;

map<string,string> p;

void printpath(string u,string s)
{
    if(u==s)
    {
        cout<<u<<endl;
        return ;
    }
    printpath(p[u],s);

    cout<<u<<endl;
}

bool diff(string a, string b)
{
    int c=0;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]!=b[i])
            c++;
    }

    if(c==1)
        return true;
    else
        return false;
}

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int e,n;
    while(cin>>e>>n)
    {

    map <string, vector<string> > m;

    string u,src,des;
    vector<string> v;
    for(int i=0; i<e; i++)
    {
        cin>>u;
        v.push_back(u);
    }
    src=v[0];
    des=v[1];

    for(int i=0; i<e; i++)
    {
        for(int j=0; j<e; j++)
        {
            if(i!=j)
            {
                if(diff(v[i],v[j]))
                {
                    m[v[i]].push_back(v[j]);
                }
            }
        }

    }


    queue <string> q;

    map<string,int> visited;
    map<string,int> level;
    map<string,int> :: iterator itr;


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
                p[y]=x;
                q.push(y);
            }
        }
    }

    printpath(des,src);

    }
    return 0;



}

