#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {



        long long a,b;
        cin>>a>>b;

        if(b%a==0)
            cout<<a<<" "<<b<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}

