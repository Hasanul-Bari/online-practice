#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;




int main()
{
    //faster;


    int m,x,ans;
    cin>>m;
    getchar();
    string s,hp;
    while(m--)
    {
        getline(cin,s);
        ans=0;
        x=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==' ')
            {
                ans=ans+x;
                x=0;
            }
            else
            {
                x=(x*10)+(s[i]-48);

            }
        }
        ans=ans+x;
        //cout<<ans<<endl;
        if(ans%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;




    }


    return 0;
}

