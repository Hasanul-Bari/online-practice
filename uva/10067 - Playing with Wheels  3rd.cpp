#include<bits/stdc++.h>
using namespace std;

vector<int> v;
map<int,int> forbid;

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


    if(_1!=9 &&  forbid[n+1000]==0)
        v.push_back(n+1000);
    else if(forbid[n-9000]==0)
        v.push_back(n-9000);

    if(_1!=0  &&  forbid[n-1000]==0 )
        v.push_back(n-1000);
    else if(forbid[n+9000]==0)
        v.push_back(n+9000);




    if(_2!=9  &&  forbid[n+100]==0 )
        v.push_back(n+100);
    else if(forbid[n-900]==0)
        v.push_back(n-900);

    if(_2!=0  &&  forbid[n-100]==0 )
        v.push_back(n-100);
    else if(forbid[n+900]==0)
        v.push_back(n+900);



    if(_3!=9  &&  forbid[n+10]==0 )
        v.push_back(n+10);
    else if(forbid[n-90]==0)
        v.push_back(n-90);

    if(_3!=0 &&  forbid[n-10]==0)
        v.push_back(n-10);
    else if(forbid[n+90]==0)
        v.push_back(n+90);




    if(_4!=9  &&  forbid[n+1]==0 )
        v.push_back(n+1);
    else if(forbid[n-9]==0)
        v.push_back(n-9);

    if(_4!=0 &&  forbid[n-1]==0 )
        v.push_back(n-1);
    else if(forbid[n+9]==0)
        v.push_back(n+9);


    // cout<<v.size()<<endl;
    /*for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";*/




}


int main()
{
    int a[4],x,src=0,des=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {


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

        int f,s;
        scanf("%d",&f);

        for(int i=0; i<f; i++)
        {
            s=0;
            for(int j=0; j<4; j++)
            {
                cin>>x;
                s=x+(s*10);
            }
            forbid[s]++;
        }


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
            for(int i=0; i<v.size(); i++)
            {
                int y=v[i];
                if(visited[y]==0)
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
            v.clear();
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

    return 0;


}

