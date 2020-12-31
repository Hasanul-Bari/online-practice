#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b1,g1,c1,b2,g2,c2,b3,g3,c3;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {



        map<int,string> m;
        map<int,string> :: iterator it;

        int x;

        x=b2+b3 + c1+c3+ g1+g2;
        if(m[x].size()==0)
            m[x]="BCG";

        // cout<<x<<endl;


        x=b2+b3 +g1+g3 +c1+c2;
        if(m[x].size()==0)
            m[x]="BGC";

        x=c2+c3 + b1+b3 + g1+g2;
        if(m[x].size()==0)
            m[x]="CBG";

        x=c2+c3 + g1+g3 + b1+b2;
        if(m[x].size()==0)
            m[x]="CGB";

        x=g2+g3 + b1+b3 + c1+c2;
        if(m[x].size()==0)
            m[x]="GBC";


        x=g2+g3 + c1+c3 + b1+b2;
        if(m[x].size()==0)
            m[x]="GCB";

        it=m.begin();

        cout<<it->second<<" "<<it->first<<endl;


    }

    return 0;
}
