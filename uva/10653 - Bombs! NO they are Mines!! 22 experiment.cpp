#include<bits/stdc++.h>
using namespace std;

struct cell
{
    int x,y;
};

int mx[4]= {-1,1,0,0};
int my[4]= {0,0,-1,1};

int main()
{

    int r,c,n,u,v,b;;
    while(cin>>r>>c && (r!=0 && c!=0) )
    {

        cin>>n;
        bool a[r][c];
        memset(a,false,sizeof(a));


        for(int i=0; i<n; i++)
        {
            cin>>u>>b;
            for(int j=0; j<b; j++)
            {
                cin>>v;
                a[u][v]=true;
            }

        }



        cell src,des;


        cin>>src.x>>src.y>>des.x>>des.y;

        //cout<<src.x<<" "<<src.y<<" "<<des.x<<" "<<des.y<<endl;
        //cout<<src<<" "<<des<<endl;


        bool visited[r][c];
        memset(visited,false,sizeof(visited));


        int level[r][c]={0};
        queue <cell> q;

        visited[src.x][src.y]=true;
        level[src.x][src.y]=0;

        q.push(src);

        while(q.empty()!=1)
        {
            cell u=q.front();
            q.pop();
            for(int i=0; i<4; i++)
            {
                cell v;
                v.x=u.x+mx[i];
                v.y=u.y+my[i];
                if( (v.x>=0 && v.x<r) && (v.y>=0 && v.y<c ) &&  (visited[v.x][v.y]==false && a[v.x][v.y]==false) )
                {
                    visited[v.x][v.y]=true;
                    level[v.x][v.y]=(level[u.x][u.y])+1;
                    q.push(v);
                }
            }
        }

        cout<<level[des.x][des.y]<<endl;


    }

    return 0;


}


