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
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int r,c,t;

    cell src;
    cin>>t;
    for(int h=1; h<=t; h++)
    {

    cin>>c>>r;
    char a[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='@')
            {
                src.x=i;
                src.y=j;
            }
        }
    }


    int cc=1;
    bool visited[r][c];
    memset(visited,false,sizeof(visited));

    queue <cell> q;

    visited[src.x][src.y]=true;

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
            if( (v.x>=0 && v.x<r) && (v.y>=0 && v.y<c ) &&  visited[v.x][v.y]==false && a[v.x][v.y]=='.')
            {
                visited[v.x][v.y]=true;
                cc++;
                q.push(v);
            }
        }
    }

    /*for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }*/

    cout<<"Case "<<h<<": "<<cc<<endl;

    }


    return 0;


}




