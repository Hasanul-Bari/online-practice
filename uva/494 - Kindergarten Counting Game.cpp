#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c,hp;
    while(getline(cin,s))
    {
        c=0;
        hp=0;
        for(int i=0; i<s.length(); i++)
        {
            if(isalpha(s[i]))
            {
                hp=1;
            }
            else if(hp==1)
            {
                c++;
                hp=0;
            }
        }
        if(hp==1)
            c++;


        cout<<c<<endl;
    }
    return 0;
}
