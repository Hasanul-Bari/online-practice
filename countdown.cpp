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

    int t,n,k,tmp,x,cs=1;
    cin>>t;



    while(t--)
    {
        cin>>n>>k;

        bool hp=false;
        int c=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(hp==true)
            {
                if(x!=tmp-1)
                    hp=false;

            }

            if(x==k)
                hp=true;


            if(hp==true && x==1)
                c++,hp=false;

            tmp=x;



        }

        cout<<"Case #"<<cs<<": "<<c<<endl;
        cs++;


    }




    return 0;
}


