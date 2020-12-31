#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        cin>>n;
        int a[n];
        x=0;
        for(int i=0; i<n; i++)
        {
            string s,h;
            cin>>s;
            if(s=="LEFT")
            {
                x--;
                a[i]=0;
            }
            else if(s=="RIGHT")
            {
                x++;
                a[i]=1;
            }
            else if(s=="SAME")
            {
                cin>>h>>y;
                if(a[y-1]==0)
                {
                    x--;
                    a[i]=0;
                }

                else
                {
                    x++;
                    a[i]=1;
                }

            }
        }
        cout<<x<<endl;


    }
    return 0;

}
