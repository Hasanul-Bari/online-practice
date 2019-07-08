#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int h=1; h<=t; h++)
    {

        int a,f,hp;
        cin>>a>>f;

        for(int k=1; k<=f; k++)
        {

            hp=0;
            for(int i=1; i!=0; )
            {
                for(int j=1; j<=i; j++)
                    cout<<i;

                if(hp==0 && i<=a)
                {
                    i++;
                }
                if(hp==0 && i==a+1)
                {
                    hp=1;
                    i--;
                }
                if(hp==1 && i>0)
                    i--;

                cout<<endl;
            }
            if(k!=f)
            cout<<endl;

        }
        if(h!=t)
            cout<<endl;

    }
    return 0;
}
