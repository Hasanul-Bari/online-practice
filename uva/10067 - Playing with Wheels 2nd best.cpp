#include<bits/stdc++.h>
using namespace std;

int v[8];

void change(int n)
{

    int x=n;
    int _4=x%10;
    x=x/10;
    int _3=x%10;
    x=x/10;
    int _2=x%10;
    x=x/10;
    int _1=x%10;

    //cout<<_1<<" "<<_2<<" "<<_3<<" "<<_4<<endl;


    if(_1!=9)
        v[0]=n+1000;
    else
        v[0]=n-9000;

    if(_1!=0)
        v[1]=n-1000;
    else
        v[1]=n+9000;




    if(_2!=9)
        v[2]=n+100;
    else
        v[2]=n-900;

    if(_2!=0)
        v[3]=n-100;
    else
        v[3]=n+900;



    if(_3!=9)
        v[4]=n+10;
    else
        v[4]=n-90;

    if(_3!=0)
        v[5]=n-10;
    else
        v[5]=n+90;




    if(_4!=9)
        v[6]=n+1;
    else
        v[6]=n-9;

    if(_4!=0)
        v[7]=n-1;
    else
        v[7]=n+9;


    // cout<<v.size()<<endl;
    /*for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";*/




}


int main()
{
    int a[4],x,src,des;
    int t;
    scanf("%d",&t);
    while(t--)
    {


        src=0,des=0;
        for(int i=0; i<4; i++)
        {
            scanf("%d",&x);
            src=x+(src*10);
        }
        //cout<<src<<endl;
        //change(src);

        for(int i=0; i<4; i++)
        {
            scanf("%d",&x);
            des=x+(des*10);
        }
        //cout<<des<<endl;
        //change(des);

        int f,s,x1,x2,x3,x4;
        scanf("%d",&f);
        map<int,int> forbid;
        for(int i=0; i<f; i++)
        {
            scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
            s=(x1*1000)+(x2*100)+(x3*10)+x4;
            forbid[s]++;
        }
        if(forbid[src]!=0 || forbid[des]!=0)
            printf("-1\n");
        else if(src==des)
            printf("0\n");
        else
        {

        queue<int> q;
        map<int,int> visited;
        map<int,int> level;
        //map<int,int> :: iterator itr;


        visited[src]=1;

        q.push(src);

        int c=0;

        while(q.empty()!=1)
        {
            int x=q.front();
            q.pop();
            change(x);
            for(int i=0; i<8; i++)
            {
                int y=v[i];
                if(visited[y]==0 && forbid[y]==0)
                {
                    visited[y]=1;
                    level[y]=level[x]+1;
                    q.push(y);
                    if(des==y)
                    {
                        c=1;
                        break;
                    }
                }
            }
            if(c==1)
                break;
        }

        /*for(itr=level.begin(); itr!=level.end(); itr++)
        {
            cout<<itr->first<<" "<<itr->second<<endl;
        }*/
        if(level[des]==0)
            printf("-1\n");
        else
            printf("%d\n",level[des]);

        }


    }

    return 0;


}
