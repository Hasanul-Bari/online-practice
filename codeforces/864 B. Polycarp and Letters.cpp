#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;
    string s;
    cin>>s;

    int c=0,max=0;
    map<char,int> m;
    for(int i=0; i<n; i++)
    {
        if(islower(s[i]))
        {
            if(m[s[i]]==0)
            {

                m[s[i]]++;
                c++;
            }
        }
        else
        {
            if(max<c)
                max=c;

            c=0;
            m.clear();
        }
    }

    if(max<c)
        max=c;

    cout<<max<<endl;




    return 0;
}
