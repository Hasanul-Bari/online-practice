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
    int k=1;

    while(cin>>s)
    {
        if(s=="end")
            break;


        set<char> v;
        set<char> :: iterator it;

        v.insert(s[0]);



        int x=s.length();

        for(int i=1; i<x; i++)
        {
                bool hp=false;
                for(it=v.begin(); it!=v.end(); it++)
                {
                    char z=*it;

                    if(z>=s[i])
                    {
                        if(z>s[i])
                        {
                            v.erase(it);
                            v.insert(s[i]);
                        }
                        hp=true;
                        break;
                    }


                }
                if(hp==false)
                    v.insert(s[i]);

        }

        cout<<"Case "<<k<<": "<<v.size()<<endl;
        k++;
    }




    return 0;
}
