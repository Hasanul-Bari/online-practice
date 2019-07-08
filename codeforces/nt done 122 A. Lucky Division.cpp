#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int nm=n;

    while(nm!=0)
    {
        int digit=nm%10;
        nm=nm/10;

        if(digit!=7 && digit!=4)
        {
            c++;
            break;
        }
    }

    //cout<<c<<endl;

    if(c==0)
        cout<<"YES"<<endl;
    else
    {
        if(n%7==0 || n%4==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



    return 0;
}
