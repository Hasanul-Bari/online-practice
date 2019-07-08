#include<bits/stdc++.h>
using namespace std;

int c;

void seiveoferatosthenis(int n)
{
    if(n==1)
    {
        cout<<n<<" "<<c<<": "<<1<<endl<<endl;
        return;
    }
    int cc=0;
    vector<bool> prime(n,true);
    vector<int> a;

    prime[1]=true;
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=n; j=j+i)
                prime[j]=false;
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(prime[i]==true)
        {
            a.push_back(i);
            cc++;
        }
    }
    //cout<<cc<<endl;
    //for(int i=0; i<a.size(); i++)
    //cout<<a[i]<<" ";

    if(cc%2==0 && cc>2*c)
    {
        int m=cc/2;
        /*cout<<a[m-1]<<endl;
        cout<<a[(m-1)-(c-1)]<<endl;
        cout<<a[(m-1)+(c)]<<endl;
        cout<<c<<endl;*/
        int l=(m-1)-(c-1);
        int h=(m-1)+c;

        cout<<n<<" "<<c<<": ";
        for(int i=l; i<=h; i++)
        {

            if(i>=0 && i<a.size() && (i!=h && i!=a.size()-1) )
                cout<<a[i]<<" ";
            else if(i>=0 && i<a.size() && (i==h || i==a.size()-1) )
                cout<<a[i]<<endl<<endl;


        }




    }
    else if(cc%2!=0 && cc>(2*c)-1)
    {
        int m=(cc/2)+1;
        //cout<<a[m-1]<<endl;
        int l=(m-1)-(c-1);
        int h=(m-1)+(c-1);

        cout<<n<<" "<<c<<": ";
        for(int i=l; i<=h; i++ )
        {


            if(i>=0 && i<a.size() && (i!=h && i!=a.size()-1) )
                cout<<a[i]<<" ";
            else if(i>=0 && i<a.size() && (i==h || i==a.size()-1) )
                cout<<a[i]<<endl<<endl;
        }

    }


}

int main()
{


    int n;
    while(cin>>n>>c && n!=EOF)
        seiveoferatosthenis(n);
    //cout<<endl<<cc<<endl;
    return 0;
}
