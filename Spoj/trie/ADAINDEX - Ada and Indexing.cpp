#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


class node{
public:
    int val;
    node *next[26];

    node()
    {
        val=0;
        for(int i=0; i<26; i++)
            next[i]=NULL;
    }

    void insert(string s)
    {
        node *curr=this;

        for(int i=0; i<s.length(); i++)
        {
            int id=s[i]-'a';

            if(curr->next[id]==NULL)
            {
                curr->next[id]=new node();
            }

            curr=curr->next[id];
            curr->val++;
        }


    }

    int search(string s)
    {
        node *curr=this;

        for(int i=0; i<s.length(); i++)
        {
            int id=s[i]-'a';

            if(curr->next[id]==NULL)
            {
                return 0;
            }

            curr=curr->next[id];
        }

        return curr->val;
    }

    ///clear memory space
    /*void del()
    {
        for(int i=0; i<26; i++)
        {
            if(next[i]!=NULL)
            {
                next[i]->del();
                delete next[i];
            }
        }
    }*/


};




int main()
{
    faster

    node *root=new node;

    int n,q;
    string s;
    cin>>n>>q;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        root->insert(s);
    }



    for(int i=0; i<q; i++)
    {
        cin>>s;
        cout<<root->search(s)<<endl;
    }

    //root->del();
    //delete root;


    return 0;
}

