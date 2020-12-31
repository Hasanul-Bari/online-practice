#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n,c;
    while(cin>>m>>n && m!=0 && n!=0)
    {
        set<long long> s;



        for(int i=0; i<m; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        c=s.size();

        cout<<((m+n)-c)<<endl;

    }
    return 0;
}
