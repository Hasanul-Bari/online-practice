#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    while(cin>>a>>b && a!=EOF)
    {
        if(a>b)
            swap(a,b);
        cout<<b-a<<endl;
    }

    return 0;
}
