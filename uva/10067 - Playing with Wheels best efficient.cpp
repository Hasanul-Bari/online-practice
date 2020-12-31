//rank 36 best efficient

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
    int x,src,des,x1,x2,x3,x4;;
    int t;
    scanf("%d",&t);
    while(t--)
    {


        scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
        src=(x1*1000)+(x2*100)+(x3*10)+x4;
        scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
        des=(x1*1000)+(x2*100)+(x3*10)+x4;

        //cout<<src<<endl;
        //change(src);

        //cout<<des<<endl;
        //change(des);

        int f,s;
        scanf("%d",&f);
        bool forbid[10001]={false};
        while(f--)
        {
            scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
            s=(x1*1000)+(x2*100)+(x3*10)+x4;
            forbid[s]=true;
        }

        if(forbid[src]==true || forbid[des]==true)
            printf("-1\n");
        else if(src==des)
            printf("0\n");
        else
        {


            queue<int> q;
            bool visited[10001]= {false};
            int level[10001]= {0};


            visited[src]=true;
            level[src]=0;

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
                    if(visited[y]==false && forbid[y]==false)
                    {
                        visited[y]=true;
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

