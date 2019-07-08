#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int t;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;
        int x=s.length();
        map<char,int> m;
        map<char,int> :: iterator it;

        for(int i=0; i<x; i++)
        {
            m[s[i]]++;
        }
        int c=0;
        for(it=m.begin(); it!=m.end(); it++)
        {
            int b=it->second;
            if(b%2!=0)
                c++;
        }

        if(c==1 || c==2 || c==3)
            cout<<"DPS"<<endl;
        else
            cout<<"!DPS"<<endl;
    }




    return 0;
}
