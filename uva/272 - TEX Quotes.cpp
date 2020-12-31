#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=0;
    while(getline(cin,s))
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='"' && c%2==0)
            {
                cout<<"``";
                c++;
            }
            else if(s[i]=='"' && c%2!=0)
            {
                cout<<"''";
                c++;
            }
            else
              cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
