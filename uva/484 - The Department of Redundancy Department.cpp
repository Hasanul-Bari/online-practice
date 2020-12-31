#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    map<int,int> m;
    map <int,int> :: iterator it;


    int x;
    while(cin>>x && x!=EOF)
    {
        if(m[x]==0)
        {
            m[x]++;
            v.push_back(x);
        }
        else
            m[x]++;
    }

    //cout<<v.size()<<" * "<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "<<m[v[i]]<<endl;
    }
    return 0;


}
