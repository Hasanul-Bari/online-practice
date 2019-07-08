#include<iostream>
using namespace  std;

int main()
{
    int s,n;
    cin>>s>>n;

    int *x=new int [n];
    int *y=new int [n];

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        x[i]=a;
        y[i]=b;
    }
    int w=0;
    for(int i=0; i<n; i++)
    {
        if(x[i]<s)
        {
            s=s+y[i];
            w++;
        }
        else
            break;
    }



    if(w==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
