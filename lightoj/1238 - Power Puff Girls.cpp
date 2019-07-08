#include<bits/stdc++.h>
using namespace std;

struct cell
{
    int x,y;
};


int mx[4]= {-1,1,0,0};
int my[4]= {0,0,-1,1};

char a[20][20];

int bfs(cell src,cell des,int r,int c)
{
    bool visited[r][c];
    memset(visited,false,sizeof(visited));
    int level[r][c]= {0};
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
            if( (v.x>=1 && v.x<=r) && (v.y>=1 && v.y<=c ) &&  visited[v.x][v.y]==false && a[v.x][v.y]!='#' && a[v.x][v.y]!='m')
            {
                visited[v.x][v.y]=true;
                level[v.x][v.y]=(level[u.x][u.y])+1;
                q.push(v);
            }
        }
    }

    return level[des.x][des.y];
}



int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int r,c,t,aa,bb,cc;

    cell srca,srcb,srcc,des;
    cin>>t;
    for(int h=1; h<=t; h++)
    {


        cin>>r>>c;

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='a')
                {
                    srca.x=i;
                    srca.y=j;
                }
                if(a[i][j]=='b')
                {
                    srcb.x=i;
                    srcb.y=j;
                }
                if(a[i][j]=='c')
                {
                    srcc.x=i;
                    srcc.y=j;
                }

                if(a[i][j]=='h')
                {
                    des.x=i;
                    des.y=j;
                }
            }
        }

        //cout<<srcb.x<<" "<<srcb.y<<" "<<des.x<<" "<<des.y<<endl;

        /*cout<<bfs(srca,des,r,c)<<endl;
        cout<<bfs(srcb,des,r,c)<<endl;
        cout<<bfs(srcc,des,r,c)<<endl;*/

        aa=bfs(srca,des,r,c);
        bb=bfs(srcb,des,r,c);
        cc=bfs(srcc,des,r,c);

        if(aa<bb)
            aa=bb;
        if(aa<cc)
            aa=cc;

        cout<<"Case "<<h<<": "<<aa<<endl;

    }




    return 0;


}

