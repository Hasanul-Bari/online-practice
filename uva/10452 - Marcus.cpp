#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

char a[10][10];
int n,m;

string s="IEHOVA#";
vector<string> h;
int k;

struct cell
{
    int x,y;
};



void dfs(cell src)
{

    //cout<<" s -> "<<s[k]<<endl;
    //cout<<src.x<<" "<<src.y<<endl;
    //cout<<" a "<<a[src.x][src.y]<<endl;

    if(a[src.x][src.y]=='#')
        return;

    struct cell temp;
    if(src.y-1>=0 && a[src.x][src.y-1]==s[k])
    {


        k++;
        temp.x=src.x;
        temp.y=src.y-1;
        //cout<<"left"<<endl;
        h.push_back("left");

        dfs(temp);

    }
    else if(src.y+1<m && a[src.x][src.y+1]==s[k])
    {


        k++;
        temp.x=src.x;
        temp.y=src.y+1;
        //cout<<"right"<<endl;

        h.push_back("right");

        dfs(temp);

    }
    else if(src.x>=0 && a[src.x-1][src.y]==s[k])
    {
        k++;
        temp.x=src.x-1;
        temp.y=src.y;
        //cout<<"forth"<<endl;

        h.push_back("forth");
        dfs(temp);
    }




}

int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;

        struct cell src;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];

                if(a[i][j]=='@')
                {
                    src.x=i;
                    src.y=j;
                }

            }
        }

        dfs(src);
        int x=h.size();

        for(int i=0; i<x-1; i++)
            cout<<h[i]<<" ";
        cout<<h[x-1]<<endl;

        k=0;
        h.clear();

    }



    return 0;
}

