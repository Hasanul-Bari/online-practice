#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    s1="WUB";
    int x=0;
    while(x<s.length() && x>=0)
    {
        x=s.find(s1);

        s.erase(x,3);
        s.insert(x," ");


        cout<<s<<endl;
    }

    return 0;

}
