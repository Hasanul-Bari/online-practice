#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

//map<int,int> p;
//map<int,int> sz;

int find_set(int p[],int v)
{
    if(v==p[v])
        return v;

    return p[v]=find_set(p,p[v]);
}

/*void union_set(int a,int b)
{
    int u=find_set(a);
    int v=find_set(b);

    if(u!=v)
    {
        if(sz[u]<sz[v])
            swap(u,v);

        p[v]=u;
        sz[u]=sz[u]+sz[v];
    }

}*/

int main()
{
    //faster

    int n,t;

    cin>>t;
    for(int k=1; k<=t; k++)
    {

        cin>>n;
        int sc=0,un=0;

        int p[n+1];


        for(int i=1; i<=n; i++)
        {
            p[i]=i;
            //sz[i]=1;
        }


        getchar();

        string s;

        while(getline(cin,s))
        {
            if(s=="")
                break;

            //cout<<s<<endl;

            char c=s[0];

            int i=2,u,v;
            string l="";


            while(s[i]!=' ')
            {
                l=l+s[i];
                i++;
            }
            i++;

            stringstream ss(l);
            ss>>u;
            l="";

            while(i<s.length())
            {
                l=l+s[i];
                i++;
            }

            stringstream ss1(l);
            ss1>>v;

            //cout<<c<<" * "<<u<<" * "<<v<<endl;

            if(c=='c')
            {
                int a=find_set(p,u);
                int b=find_set(p,v);

                if(a!=b)
                {
                    /*if(sz[a]<sz[b])
                        swap(a,b);*/

                    p[b]=a;
                    //sz[a]=sz[a]+sz[b];
                }
            }
            else if(c=='q')
            {
                int a=find_set(p,u);
                int b=find_set(p,v);


                if(a!=b)
                    un++;
                else
                    sc++;
            }


        }

        cout<<sc<<","<<un<<endl;

        if(k!=t)
            cout<<endl;

    }


    return 0;
}

