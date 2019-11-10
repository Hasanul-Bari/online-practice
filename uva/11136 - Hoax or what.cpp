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

    int n,x,y;



    while(cin>>n)
    {
        if(n==0)
            break;


        multiset<int> s;
        multiset<int> :: iterator it;

        ll ss=0;

        while(n--)
        {
            cin>>x;
            while(x--)
            {
                cin>>y;
                s.insert(y);
            }

            it=s.begin();
            int p=*it;

            s.erase(it);

            it=s.end();
            it--;
            int q=*it;

            s.erase(it);

            //cout<<p<<" **  "<<q<<endl;

            ss=ss+(q-p);
        }

        cout<<ss<<endl;
    }




    return 0;
}
