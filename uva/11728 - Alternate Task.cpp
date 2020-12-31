#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    vector<int> a;
    a.push_back(1);
    for(n=2; n<=1000; n++)
    {


        int sum=n+1;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0 && i!=(n/i))
            {
                sum=sum+(n/i)+i;
            }
            else if(n%i==0 && i==(n/i))
            {
                sum=sum+i;
            }
        }
        //cout<<sum<<endl;
        a.push_back(sum);
    }

    int x;
    int j=1;
    while(cin>>x && x!=0)
    {
        int c=-1;
        int m=0;
        for(int i=0; i<a.size(); i++)
        {
            if(x==a[i])
            {
                if((i+1)>c)
                    c=i+1;


            }
        }
        cout<<"Case "<<j<<": "<<c<<endl;

        j++;
    }
    return 0;
}
