#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int p=0; p<t; p++)
    {

        int n;
        cin>>n;
        int a[n+1][n+1];
        for(int i=1,c=1; i<=n; i++)
        {
            for(int j=1,k=c,h=i; j<=n; j++,h++)
            {

                    cout<<k<<" ";
                    k=k+h;


            }
            c++;

            cout<<endl;

        }
    }


    return 0;
}

