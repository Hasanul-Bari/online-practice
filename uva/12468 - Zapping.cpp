#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b && (a!=-1 && b!=-1) )
    {
        if(a>b)
            swap(a,b);
        int x=(abs((a+99)-b))+1;
        int y=abs(a-b);
        //cout<<x<<" "<<y<<endl;
        cout<<min(x,y)<<endl;
    }
    return 0;
}
