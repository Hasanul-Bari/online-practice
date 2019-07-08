#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    for(int k=1; k<=n; k++)
    {

        int a[10],i,j;

        for(i=0; i<10; i++)
            cin>>a[i];

        for(i=1; i<10; i++)
        {
            if(a[i]>a[i-1])
                break;
        }

        for(j=1; j<10; j++)
        {
            if(a[j]<a[j-1])
                break;
            }

        if(i==10 || j==10)
        {
            cout<<"Ordered"<<endl;
        }
        else
            cout<<"Unordered"<<endl;

    }

    return 0;


}
