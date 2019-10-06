#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int k;
    cin>>k;

    string s="aeiou";


    bool c=false;
    for(int i=1; i*i<=k; i++)
    {
        if(k%i==0 && i>=5 &&  k/i>=5)
        {
            c=true;
            break;
        }
    }

    if(c==true)
    {
        for(int i=0,j=0; i<k; i++)
        {
            cout<<s[j];
            j++;
            if(j==5)
                j=0;
        }

        cout<<endl;
    }
    else
        cout<<-1<<endl;






    return 0;
}
