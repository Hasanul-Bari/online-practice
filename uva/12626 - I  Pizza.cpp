#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        string s;
        cin>>s;
        int a[6]= {0,0,0,0,0,0};
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='M')
                a[0]++;
            else if(s[i]=='A')
                a[1]++;
            else if(s[i]=='R')
                a[2]++;
            else if(s[i]=='G')
                a[3]++;
            else if(s[i]=='I')
                a[4]++;
            else if(s[i]=='T')
                a[5]++;

        }
        a[1]=a[1]/3;
        a[2]=a[2]/2;

        sort(a,a+6);
        cout<<a[0]<<endl;
    }

    return 0;

}
