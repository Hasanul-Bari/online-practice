#include<bits/stdc++.h>
using  namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int main()
{
    int x;

    vector<int> a;
    while(cin>>x && x!=0)
    {
        a.push_back(x);
        while(cin>>x && x!=0)
        {
            a.push_back(x);
        }
        int g=abs(a[0]-a[1]);
        for(int i=1; i<a.size()-1; i++)
        {
            int y=abs(a[i+1]-a[i]);
            //cout<<g<<" "<<y<<endl;
            g=gcd(g,y);
        }
        if(g==0)
            cout<<1<<endl;
        else
          cout<<g<<endl;

        a.clear();




    }
    return 0;
}
