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
    int q,k,x;
    cin>>q;

    multiset<int> s;
    multiset<int> :: iterator it;

    for(int i=0; i<q; i++)
    {
        cin>>k;

        if(k==1)
        {
            cin>>x;
            s.insert(x);
        }
        else if(k==2)
        {
            cin>>x;
            if(s.find(x)==s.end())
                cout<<-1<<endl;
            else
                s.erase(s.find(x));
        }
        else if(k==3)
        {
            if(s.size()==0)
                cout<<-1<<endl;
            else
            {
                it=s.end();
                it--;
                cout<<*it<<endl;
            }

        }
        else if(k==4)
        {
            if(s.size()==0)
                cout<<-1<<endl;
            else
            {
                it=s.begin();
                cout<<*it<<endl;
            }
        }
    }




    return 0;
}
