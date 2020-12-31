#include<bits/stdc++.h>
using namespace std;

int kx[8]= {-2,-1,1,2,2,1,-1,-2};
int ky[8]= {1,2,2,1,-1,-2,-2,-1};

int main()
{
    vector<int> adj[65];
    int x,c=1;

    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            //cout<<c<<" - ";
            for(int k=0; k<8; k++)
            {
                if( (i+kx[k]>=1 )&& (j+ky[k]>=1) && (i+kx[k]<=8) && (j+ky[k]<=8 ) )
                {
                    x=(c+ky[k])+(kx[k]*8);
                    //cout<<x<<" ("<<i+kx[k]<<" "<<j+ky[k]<<")  ";
                    adj[c].push_back(x);
                }

            }
            c++;
        }
    }

    /*for(int i=1; i<=64; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }*/

    string srcc,dest;

    int srci,srcj,desi,desj,src,des;

    while(cin>>srcc>>dest)
    {
        srci=srcc[0]-96;
        srcj=srcc[1]-48;

        desi=dest[0]-96;
        desj=dest[1]-48;

        src=srci+((srcj-1)*8) ;
        des=desi+((desj-1)*8) ;

        //cout<<srci<<" "<<srcj<<" "<<desi<<" "<<desj<<endl;

        //cout<<src<<" "<<des<<endl;


        bool visited[65]= {false};
        int level[65];
        queue <int> q;

        visited[src]=true;
        level[src]=0;

        q.push(src);

        while(q.empty()!=1)
        {
            int x=q.front();
            q.pop();
            for(int i=0; i<adj[x].size(); i++)
            {
                int y=adj[x][i];
                if(visited[y]==false)
                {
                    visited[y]=true;
                    level[y]=level[x]+1;
                    q.push(y);
                }
            }
        }

        cout<<"To get from "<<srcc<<" to "<<dest<<" takes "<<level[des]<<" knight moves."<<endl;

    }

    return 0;


}
