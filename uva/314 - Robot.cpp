#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

bool a[54][54];
int r,c;

bool cango(int x,int y)
{
    if(x-1>=0 && x+1<=r && y-1>=0 && y+1<=c)
    {
        //cout<<"( "<<a[x+1][y]<<" "<<a[x-1][y]<<" "<<a[x][y-1]<<" "<<a[x][y+1]<<" )"<<endl;

        if(a[x+1][y]==0 && a[x-1][y]==0 && a[x][y-1]==0 && a[x][y+1]==0)
            return true;
        else
            return false;
    }
    else
        return false;

}

struct cell
{
    int x,y;
};




int mx[4]= {-1,1,0,0};
int my[4]= {0,0,-1,1};

int main()
{
    faster

    cin>>r>>c;



    for(int i=1; i<=r; i++)
        for(int j=1; j<=c; j++)
            cin>>a[i][j];

    for(int i=0; i<=r; i++)
            a[i][0]=0;

    for(int i=0; i<=c; i++)
            a[0][i]=0;



    cell src,des;


    cin>>src.x>>src.y>>des.x>>des.y;


    cout<<src.x<<" "<<src.y<<" "<<des.x<<" "<<des.y<<endl;



    bool visited[r+1][c+1];
    int level[r+1][c+1]= {0};

    for(int i=0; i<=r; i++)
        for(int j=0; j<=c; j++)
            visited[i][j]=false;

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
            cout<<v.x<<" **** "<<v.y<<"    **** "<<cango(v.x,v.y)<<endl;
            if( visited[v.x][v.y]==false && cango(v.x,v.y)==true )
            {
                //cout<<v.x<<" ** "<<v.y<<endl;
                visited[v.x][v.y]=true;
                level[v.x][v.y]=(level[u.x][u.y])+1;
                q.push(v);
            }
        }
    }

    cout<<level[des.x][des.y]<<endl;


    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cout<<level[i][j]<<" ";
        }
        cout<<endl;

    }




    return 0;


}




