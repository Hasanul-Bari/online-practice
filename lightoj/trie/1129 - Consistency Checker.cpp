#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


class node
{
public:
    bool endmark=false;
    node *next[10]={};

    node()
    {
        /*endmark=false;
        for(int i=0; i<10; i++)
            next[i]=NULL;*/
    }

    bool insert(string s)
    {
        node *curr=this;

        if(curr->endmark==true)
        {
            cout<<"false"<<endl;
        }


        for(int i=0; i<s.length(); i++)
        {
            int id=s[i]-'0';

            if(curr->endmark==true)
            {
                return false;
            }

            if(curr->next[id]==NULL)
            {
                curr->next[id]=new node();
            }

            curr=curr->next[id];
        }

        curr->endmark=true;

        return true;
    }

    void del()
    {
        for(int i=0; i<10; i++)
        {
            if(next[i]!=NULL)
            {
                next[i]->del();
                delete next[i];
            }
        }
    }


};




int main()
{
    faster

    int t,k=1;
    cin>>t;

    while(t--)
    {


        node *root=new node;

        int n;
        cin>>n;
        string s[n];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        sort(s,s+n);

        bool hp=true;
        cout<<"Case "<<k<<": ";
        k++;
        for(int i=0; i<n; i++)
        {
            if(root->insert(s[i])==false)
            {
                cout<<"NO"<<endl;
                hp=false;
                break;
            }

        }

        if(hp==true)
            cout<<"YES"<<endl;

        root->del();
        delete root;



    }

    return 0;
}



