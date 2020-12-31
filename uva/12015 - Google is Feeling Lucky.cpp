#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s[10];
    int a[10];
    for(int k=1; k<=t; k++)
    {

        for(int i=0; i<10; i++)
        {
            cin>>s[i]>>a[i];

        }
        int *x=max_element(a,a+10);
        //cout<<x<<endl;

        cout<<"Case #"<<k<<":"<<endl;
        for(int i=0; i<10; i++)
        {
            if(a[i]==*x)
                cout<<s[i]<<endl;
        }
    }
    return 0;
}
