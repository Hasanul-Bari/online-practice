#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

map<string,int> visited;


stack<string> s;


void dfs(map<string, vector<string> > m,string src)
{

    visited[src]=1;

    for(int i=0; i<m[src].size(); i++)
    {
        string x=m[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==0)
        {
            dfs(m,x);
        }

    }

    s.push(src);

}

int main()
{
    faster

    int n,e,k=1;
    while(cin>>n)
    {
        string ss[n];
        for(int i=0; i<n; i++)
            cin>>ss[i];

        cin>>e;

        map<string, vector<string> > m;

        string u,v;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            m[u].push_back(v);
        }



        for(int i=0; i<n; i++)
        {
            if(visited[ss[i]]==0)
            {
                dfs(m,ss[i]);

            }

        }

        cout<<"Case #"<<k<<": Dilbert should drink beverages in this order: ";
        k++;
        while(s.size()>1)
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<s.top()<<"."<<endl;
        s.pop();


        visited.clear();




    }
    return 0;
}



