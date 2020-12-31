#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];

    string h[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

    int x=ceil(double(n/16.0));
    //cout<<x<<endl;
    for(int i=0,k=0; i<x; i++)
    {
        for(int j=0; j<16; j++)
        {
            cout<<s[k]<<": "<<h[j]<<endl;
            k++;
            if(k==n)
                k=0;
        }

    }

    return 0;
}
