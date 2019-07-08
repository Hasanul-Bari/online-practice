#include<bits/stdc++.h>
using namespace std;

int getdigit(int n)
{
    return n%10000;
}


int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int l,u,r,x,k=1;
    while(cin>>l>>u>>r )
    {

        if(l==0 && r==0 && u==0)
            break;

        vector<int> a;
        for(int i=0; i<r; i++)
        {
            cin>>x;
            a.push_back(x);
        }


        int src=l,c=0;


        queue <int> q;

        map<int,int> visited;
        map<int,int> level;
        map<int,int> :: iterator itr;


        visited[src]=1;

        q.push(src);

        while(q.empty()!=1)
        {
            int x=q.front();
            q.pop();
            for(int i=0; i<r; i++)
            {
                int y=getdigit(x+a[i]);
                if(visited[y]==0)
                {
                    visited[y]=1;
                    level[y]=level[x]+1;
                    q.push(y);
                }
                if(y==u)
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                break;
        }

        cout<<"Case "<<k<<": ";
        k++;

        if(level[u]==0)
                cout<<"Permanently Locked"<<endl;
        else
            cout<<level[u]<<endl;

    }
    return 0;
}
