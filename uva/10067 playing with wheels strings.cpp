#include<bits/stdc++.h>
using namespace std;

string v[8];

char increase(char c)
{
    if(c=='9')
        c='0';
    else
        c++;

    return c;
}

char decrease(char c)
{
    if(c=='0')
        c='9';
    else
        c--;
    return c;
}

void change(string n)
{
    v[0]=n;
    v[0][0]=increase(n[0]);
    //cout<<v[0]<<endl;

    v[1]=n;
    v[1][2]=increase(n[2]);
    //cout<<v[1]<<endl;

    v[2]=n;
    v[2][4]=increase(n[4]);
    //cout<<v[2]<<endl;

    v[3]=n;
    v[3][6]=increase(n[6]);
    //cout<<v[3]<<endl;



    v[4]=n;
    v[4][0]=decrease(n[0]);
    //cout<<v[4]<<endl;

    v[5]=n;
    v[5][2]=decrease(n[2]);
    //cout<<v[5]<<endl;

    v[6]=n;
    v[6][4]=decrease(n[4]);
    //cout<<v[6]<<endl;

    v[7]=n;
    v[7][6]=decrease(n[6]);
    //cout<<v[7]<<endl;



}


int main()
{

    string src,des;
    int t;
    cin>>t;
    char l=getchar();
    for(int h=1; h<=t; h++)
    {
        getline(cin,src);
        getline(cin,des);

        //cout<<"src = "<<src<<endl;
        //cout<<"des = "<<des<<endl;



        int f;
        string s;
        cin>>f;
        l=getchar();
        map<string,int> forbid;
        map<string,int> :: iterator it;
        for(int i=0; i<f; i++)
        {
            getline(cin,s);
            //cout<<s<<endl;
            forbid[s]++;
        }

        /*for(it=forbid.begin(); it!=forbid.end(); it++)
            cout<<it->first<<" "<<it->second<<endl;

        cout<<forbid[des]<<endl;*/




        if(forbid[des]!=0)
            cout<<"-1"<<endl;
        else if(forbid[src]!=0)
            cout<<"-1"<<endl;
        else if(src==des)
            cout<<0<<endl;
        else
        {

            //cout<<forbid[des]<<" * "<<endl;
            queue<string> q;
            map<string,int> visited;
            map<string,int> level;


            visited[src]=1;

            q.push(src);

            int c=0;



            while(q.empty()!=1)
            {
                string x=q.front();
                q.pop();
                change(x);
                for(int i=0; i<8; i++)
                {

                    string y=v[i];
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



            if(level[des]==0)
                printf("-1\n");
            else
                printf("%d\n",level[des]);


        }

        if(h!=t)
            getline(cin,s);



    }

    return 0;


}
