#include<iostream>
using namespace std;

int main()
{
    int t,m,n,x,y;
    while(cin>>t && t!=0)
    {
        cin>>m>>n;
        for(int i=1; i<=t; i++)
        {
            cin>>x>>y;
            if(x==m || y==n)
                cout<<"divisa"<<endl;
            else if(x>m && y>n)
                cout<<"NE"<<endl;
            else if(x>m && y<n)
                cout<<"SE"<<endl;
            else if(x<m && y<n)
                cout<<"SO"<<endl;
            else if(x<m && y>n)
                cout<<"NO"<<endl;
        }
    }
}
