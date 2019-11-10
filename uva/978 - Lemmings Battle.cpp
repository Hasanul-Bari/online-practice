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

    int n;
    cin>>n;

    int bg,g,b,x;

    for(int k=1; k<=n; k++)
    {
        cin>>bg>>g>>b;

        multiset<int, greater<int> > gg,bb;
        multiset<int> :: iterator it;

        for(int i=0; i<g; i++)
        {
            cin>>x;
            gg.insert(x);
        }

        for(int i=0; i<b; i++)
        {
            cin>>x;
            bb.insert(x);
        }

        int gs=gg.size(),bs=bb.size();


        while(1)
        {
            vector<int> vb,vg;
            for(int i=0; i<bg; i++)
            {
                if(gs==0 || bs==0)
                    break;
                else
                {
                    it=gg.begin();
                    int p=*it;
                    gg.erase(it);

                    it=bb.begin();
                    int q=*it;
                    bb.erase(it);

                    //cout<<p<<" "<<q<<endl;

                    if(p>q)
                        vg.pb(p-q);
                    else if(p<q)
                        vb.pb(q-p);


                    gs=gg.size(),bs=bb.size();

                    //cout<<vg.size()<<" ***hp* "<<vb.size()<<endl;
                }

            }

            for(int i=0; i<vg.size(); i++)
                gg.insert(vg[i]);

            for(int i=0; i<vb.size(); i++)
                bb.insert(vb[i]);

            gs=gg.size(),bs=bb.size();

            //cout<<gs<<" --- "<<bs<<endl;

            if(gs==0 || bs==0)
                break;



        }

        //cout<<gg.size()<<" ** "<<bb.size()<<endl;

        if(gs==0 && bs==0)
            cout<<"green and blue died"<<endl;
        else if(gs==0)
        {
            cout<<"blue wins"<<endl;
            for(it=bb.begin(); it!=bb.end(); it++)
                cout<<*it<<endl;
        }
        else if(bs==0)
        {
            cout<<"green wins"<<endl;
            for(it=gg.begin(); it!=gg.end(); it++)
                cout<<*it<<endl;
        }

        if(k!=n)
            cout<<endl;





    }






    return 0;
}
