#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int x,y;
    while(cin>>a>>b)
    {

        if(a=="0" && b=="0")
            break;
        x=a.length();
        y=b.length();

        if(x<y)
        {
            swap(a,b);
            swap(x,y);
        }

        //cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;

        int carry=0,c=0;

        for(int i=x-1,j=y-1; j>=0; j--,i--)
        {
            if(carry==0)
            {
                if( (a[i]-48)+ (b[j]-48) >9 )
                {
                    carry=1;
                    c++;
                }
            }
            else
            {
                if(  ((a[i]-48)+ (b[j]-48)+1) >9 )
                {
                    carry=1;
                    c++;
                }
                else
                    carry=0;
            }

        }

        for(int i=(x-y)-1; i>=0; i--)
        {
            if(carry==1)
            {
                if( ((a[i]-48) + 1) >9)
                {
                    carry=1;
                    c++;
                }
                else
                    carry=0;
            }
        }

        //cout<<c<<endl;
        if(c==0)
            cout<<"No carry operation."<<endl;
        else if(c==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<c<<" carry operations."<<endl;

    }
    return 0;
}
