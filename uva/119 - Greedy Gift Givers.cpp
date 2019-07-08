#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    while(1)
    {

        int a[n]= {0};
        string s[n];
        map<string,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            m[s[i]]=0;
        }
        string h,sh;
        int x,y;

        for(int i=0; i<n; i++)
        {
            cin>>h>>y>>x;
            if(x!=0)
                m[h]=m[h]-(y-(y%x));
            for(int j=0; j<x; j++)
            {
                cin>>sh;
                m[sh]=m[sh]+((y-(y%x))/x);
            }

        }

        for(int i=0; i<n; i++)
            cout<<s[i]<<" "<<m[s[i]]<<endl;

        if(cin>>n)
            cout<<endl;
        else
            break;


    }
    return 0;


}
