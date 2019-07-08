#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {

        list<int> l;
        list<int> :: iterator it;
        vector<int> v;

        for(int i=1; i<=n; i++)
            l.push_back(i);

        /*for(it=l.begin(); it!=l.end(); it++)
            cout<<*it<<endl;*/

        while(l.size()!=1)
        {
            it=l.begin();
            int x=*it;
            l.pop_front();
            v.push_back(x);


            it=l.begin();
            int y=*it;
            l.pop_front();
            l.push_back(y);
        }
        it=l.begin();
        int m=*it;


        int h=v.size();
        if(h==0)
            cout<<"Discarded cards:"<<endl;
        else
            cout<<"Discarded cards: ";


        for(int i=0; i<h; i++)
        {
            if(i==h-1)
                cout<<v[i]<<endl;
            else
                cout<<v[i]<<", ";
        }

        cout<<"Remaining card: "<<m<<endl;


    }
    return 0;
}
