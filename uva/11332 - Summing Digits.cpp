#include<bits/stdc++.h>
#define ll     long long
#define ull    unsigned long long

using namespace std;

int main()
{
    int s;
    ull n,a;
    while(cin>>n && n!=0)
    {
        a=n;
        s=0;
        while(1)
        {
            while(a!=0)
            {
                s=s+(a%10);
                a=a/10;
            }
            if(s>=0 && s<=9)
            {
                cout<<s<<endl;
                break;
            }

            a=s;
            s=0;
        }


    }
    return 0;
}
