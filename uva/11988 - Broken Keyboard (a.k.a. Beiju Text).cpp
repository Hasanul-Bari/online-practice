#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    string s;

    while(getline(cin,s))
    {
        int x=s.length();

        list<char> l;
        list<char> :: iterator it;


        bool cur=true;

        for(int i=0; i<x; i++)
        {
            //cout<<s[i];

            if(s[i]==']')
                cur=true;
            else if(s[i]=='[')
            {
                cur=false;
                it=l.begin();
            }
            else if(cur==true)
                l.push_back(s[i]);
            else if(cur==false)
            {
                l.insert(it,s[i]);
                //it++;
            }

        }

        //cout<<l.size()<<endl;



        for(it=l.begin(); it!=l.end(); it++)
            cout<<*it;
        cout<<endl;

    }




    return 0;
}
