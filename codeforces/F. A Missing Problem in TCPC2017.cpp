#include<iostream>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int *a=new int[n];
        int *b=new int[n+1];

        for(int j=1; j<n; j++)
        {
            cin>>a[j];
        }
        for(int j=1; j<n+1; j++)
        {
            b[j]=j;
        }


        for(int j=1; j<n+1; j++)
        {
           if(b[j]!=a[j])
            {
                c=b[j];
                break;
            }

        }
        cout<<c<<endl;

    }
    return 0;
}
