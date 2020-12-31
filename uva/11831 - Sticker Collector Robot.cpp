#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

struct cell
{
    int x,y;
};


int mx[4]= {-1,1,0,0};
int my[4]= {0,0,-1,1};

int main()
{
    faster
    int r,c,n;
    string s;
    while(cin>>r>>c>>n)
    {
        if(r==0 && c==0 && n==0)
            break;



        char a[r+1][c+1];

        cell src;
        char dir;

        map<char,char> dd;
        dd.insert(make_pair('O','N'));
        dd.insert(make_pair('N','L'));
        dd.insert(make_pair('L','S'));
        dd.insert(make_pair('S','O'));

        map<char,char> ee;
        ee.insert(make_pair('O','S'));
        ee.insert(make_pair('N','O'));
        ee.insert(make_pair('L','N'));
        ee.insert(make_pair('S','L'));


        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>a[i][j];
                if(isalpha(a[i][j]))
                {
                    src.x=i;
                    src.y=j;
                    dir=a[i][j];
                }
            }

        }

        cin>>s;
        int x=s.length(),cc=0;

        for(int i=0; i<x; i++)
        {
            if(s[i]=='D')
            {
                dir=dd[dir];
            }
            else if(s[i]=='E')
            {
                dir=ee[dir];

            }
            else
            {
                if(dir=='O' && src.y-1>=0 && a[src.x][src.y-1]!='#' )
                {
                    src.y--;
                }
                else if(dir=='L' && src.y+1<c && a[src.x][src.y+1]!='#' )
                {
                    src.y++;
                }
                else if(dir=='N' && src.x-1>=0 && a[src.x-1][src.y]!='#' )
                {
                    src.x--;
                }
                else if(dir=='S' && src.x+1<r && a[src.x+1][src.y]!='#' )
                {
                    src.x++;
                }

                //cout<<src.x<<" ** "<<src.y<<"  "<<dir<<endl;

                if(a[src.x][src.y]=='*')
                {
                    cc++;
                    a[src.x][src.y]='.';
                }

            }
        }

        cout<<cc<<endl;



    }

    return 0;


}




