#include<bits/stdc++.h>
using namespace std;

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
    int t;
    cin>>t;
    for(int h=1; h<=t; h++)
    {


        vector<string> v;
        string s;
        while(cin>>s && s!="*" )
        {
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
        char a;

        a=getchar();


        /*map <string, vector<string> > :: iterator it;
        for(it=m.begin(); it!=m.end(); it++)
        {
            for(int j=0; j<it->second.size(); j++)
            {
                cout<<it->first<<"    "<<it->second[j]<<" ";
            }
            cout<<endl;
        }*/

        //cout<<m.size()<<endl;

        int n=m.size();

        string ss;
        while(getline(cin,ss))
        {

            if(ss.length()==0)
                break;

            string src,des;

            int i;
            for(i=0; ss[i]!=' '; i++)
                src=src+ss[i];

            i++;
            for( ; i<ss.length(); i++)
                des=des+ss[i];


            //cout<<src<<" "<<des<<endl;

            //cin>>des;


            queue <string> q;

            map<string,int> visited;
            map<string,int> level;
            map<string,int> :: iterator itr;


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
                    }
                }
            }

            /* for(itr=level.begin(); itr!=level.end(); itr++)
             {
                 cout<<itr->first<<" "<<itr->second<<endl;
             }*/

            cout<<src<<" "<<des<<" "<<level[des]<<endl;

        }

        if(h!=t)
            cout<<endl;

    }

    return 0;


}


