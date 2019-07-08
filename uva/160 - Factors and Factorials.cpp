#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    while(cin>>n && n!=0)
    {



        vector<bool> prime(n,true);
        vector<int> a;

        for(int  i=2; i*i<=n; i++)
        {
            if(prime[i]==true)
            {
                for( int j=i*i; j<=n; j=j+i)
                    prime[j]=false;
            }
        }


        for(int  i=2; i<=n; i++)
        {
            if(prime[i]==true)
            {
                int x=0,y;
                y=n;
                while(y!=0)
                {

                    x=x+(y/i);
                    y=y/i;
                }
                a.push_back(x);

            }
        }

        cout<<setw(3)<<n<<"! =";
        int c=0;
        for(int  i=0; i<a.size(); i++)
        {
            c++;
            if(c==16)
            {
                c=0;
                cout<<endl;
                cout<<setw(9)<<a[i];


            }
            else
                cout<<setw(3)<<a[i];

        }
        cout<<endl;


    }


    return 0;
}
