#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;


        int h=y,c=0,p=0;
        for(int i=0; i<y; i++)
        {

            if(h+p>=x)
                break;
            else
            {
                c++;
                h--;
                p=p+2;
            }
        }

        cout<<c<<endl;



    }
    return 0;
}
