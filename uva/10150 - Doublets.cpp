#include<bits/stdc++.h>
using namespace std;

map<string,string> p;

void printpath(string u,string s)
{
    if(u==s)
    {
        cout<<u<<endl;
        return ;
    }
    printpath(p[u],s);

    cout<<u<<endl;
}


bool equallength(string a,string b)
{
    if(a.length()==b.length())
        return true;
    else
        return false;
}

bool diff(string a, string b)
{
    int c=0;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]!=b[i])
            c++;
    }

    if(c==1)
        return true;
    else
        return false;
}


int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string> v;
    string s;
    while(getline(cin,s))
    {
        if(s.length()==0)
            break;
        v.push_back(s);
    }


    map <string, vector<string> > m;

    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            if(i!=j)
            {
                if(equallength(v[i],v[j]))
                {
                    if(diff(v[i],v[j]))
                    {
                        //cout<<v[i]<<" "<<v[j]<<endl;
                        m[v[i]].push_back(v[j]);
                    }

                }
            }
        }
    }



    string ss;
    int hp=0;
    while(getline(cin,ss))
    {

        if(ss.length()==0)
            break;
        else if(hp!=0)
            printf("\n");

        hp=1;




        string src,des;

        int i;
        for(i=0; ss[i]!=' '; i++)
            src=src+ss[i];

        i++;
        for( ; i<ss.length(); i++)
            des=des+ss[i];


        queue <string> q;

        map<string,int> visited;
        map<string,int> level;
        // map<string,int> :: iterator itr;


        visited[src]=1;

        q.push(src);

        while(q.empty()!=1)
        {
            string x=q.front();
            q.pop();
            for(int i=0; i<m[x].size(); i++)
            {
                string y=m[x][i];
                if(visited[y]==0)
                {
                    visited[y]=1;
                    level[y]=level[x]+1;
                    q.push(y);
                    p[y]=x;
                }
            }
        }

        /* for(itr=level.begin(); itr!=level.end(); itr++)
         {
             cout<<itr->first<<" "<<itr->second<<endl;
         }*/

        if(level[des]==0)
            cout<<"No solution."<<endl;
        else
            printpath(des,src);

        p.clear();


    }





    return 0;


}
