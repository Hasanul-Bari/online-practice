#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0;
    while(cin>>n && n!=0)
    {
        i++;
        int c=0,k=0;
        for(int j=1; j<=n; j++)
        {
            int x;
            cin>>x;
            if(x==0)
                c++;
            else
                k++;
        }
        cout<<"Case "<<i<<": "<<k-c<<endl;

    }
    return 0;
}
