#include<bits/stdc++.h>
using namespace std;

struct cell
{
    int x,y;
};

int p1[1005][1005];
int p2[1005][1005];
int t1=0,t2=0,cc=0;

void printpath(int x2,int y2,int x1,int y1)
{

    if(x2==x1 && y2==y1)
    {
        //cout<<x2<<" "<<y2<<endl;
        return ;
    }
    printpath(p1[x2][y2],p2[x2][y2],x1,y1);

    //cout<<p1[x2][y2]<<" "<<p2[x2][y2]<<" "<<x2<<" "<<y2<<endl;

    if(p1[x2][y2]==x2 &&  p2[x2][y2]!=y2 && t1==0)
    {
        t1=1;
        //cout<<p1[x2][y2]<<" "<<p2[x2][y2]<<" "<<x2<<" "<<y2<<" #1 "<<endl;
    }
    if(p1[x2][y2]!=x2 &&  p2[x2][y2]==y2 && t2==0)
    {
        t2=1;
        //cout<<p1[x2][y2]<<" "<<p2[x2][y2]<<" "<<x2<<" "<<y2<<" #2 "<<endl;
    }

    if(p1[x2][y2]==x2 &&  p2[x2][y2]!=y2 && t2==1)
    {
       t2=0;
       cc++;
       //cout<<p1[x2][y2]<<" "<<p2[x2][y2]<<" "<<x2<<" "<<y2<<" #3 "<<endl;
    }

    if(p1[x2][y2]!=x2 &&  p2[x2][y2]==y2 && t1==1)
    {
        t1=0;
        cc++;
        //cout<<p1[x2][y2]<<" "<<p2[x2][y2]<<" "<<x2<<" "<<y2<<" #4 "<<endl;
    }

    //cout<<cc<<endl;


}

int mx[4]= {-1,1,0,0};
int my[4]= {0,0,-1,1};

int main()
{

    int r,c;
    cin>>r>>c;
    char a[r][c];

    cell src,des;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='S')
            {
                src.x=i;
                src.y=j;
            }
            if(a[i][j]=='T')
            {
                des.x=i;
                des.y=j;
            }
        }
    }



    //cout<<src.x<<" "<<src.y<<" "<<des.x<<" "<<des.y<<endl;
    //cout<<src<<" "<<des<<endl;


    bool visited[r][c]= {false};
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
            if( (v.x>=0 && v.x<r) && (v.y>=0 && v.y<c ) &&  visited[v.x][v.y]==false && a[v.x][v.y]!='*')
            {
                visited[v.x][v.y]=true;
                level[v.x][v.y]=(level[u.x][u.y])+1;
                q.push(v);
                p1[v.x][v.y]=u.x;
                p2[v.x][v.y]=u.y;
                //cout<<p1[v.x]<<" "<<p2[v.y]<<endl;
            }
        }
    }

    printpath(des.x,des.y,src.x,src.y);

    cout<<cc<<endl;

    if(cc<=2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

   // cout<<level[des.x][des.y]<<endl;


    return 0;


}




