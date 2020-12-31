#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,d,c;
    while(cin>>n)
    {
        c=0;
        map<int,int> m;
        cin>>y;
        for(int i=0; i<n-1; i++)
        {
            cin>>x;
            d=abs(x-y);
            y=x;
            if(d>=1 && d<=n-1)
            {
                if(m[d]==0)
                    m[d]++;
                else
                    c=1;
            }
            else
                c=1;
        }

        if(c==0)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;

    }
    return 0;
}
