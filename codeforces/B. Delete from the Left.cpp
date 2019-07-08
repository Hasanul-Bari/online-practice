#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    string s,t;
    cin>>s>>t;
    int a=s.length(),b=t.length(),c=0;


    for(int i=a-1,j=b-1; (i>=0 && j>=0);   i--,j--)
    {
        if(s[i]==t[j])
            c++;
        else
            break;

    }

    cout<<a+b-2*c<<endl;





    return 0;
}
