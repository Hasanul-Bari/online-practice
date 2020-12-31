#include<bits/stdc++.h>
using namespace std;

int c;
int main()
{
    int n,c;
    vector<bool> prime(1000,true);
    vector<int> a;
    for(int i=2; i*i<=1000; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=1000; j=j+i)
                prime[j]=false;
        }
    }

    for(int i=1; i<=1000; i++)
    {
        if(prime[i]==true)
            a.push_back(i);
    }
    /*for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";*/
    while(cin>>n>>c && n!=EOF)
    {
        int cc=0;
        for(int i=0; a[i]<=n && i<a.size(); i++)
        {
            cc++;
            //cout<<a[i]<<endl;

        }
        //cout<<cc<<endl;

        if(cc%2==0 && cc>2*c)
        {
            int m=cc/2;
            int l=(m-1)-(c-1);
            int h=(m-1)+c;

            cout<<n<<" "<<c<<": ";
            for(int i=l; i<=h; i++)
            {

                if(i>=0 && i<=n && i<a.size() && (i!=h && i!=n ) )
                    cout<<a[i]<<" ";
                else if(i>=0 && i<=n  && i<a.size() && (i==h || i==n ) )
                    cout<<a[i]<<endl<<endl;


            }


        }
        else if(cc%2!=0 && cc>(2*c)-1)
        {
            //cout<<"odd"<<endl;
            int m=(cc/2)+1;
            //cout<<a[m-1]<<endl;
            int l=(m-1)-(c-1);
            int h=(m-1)+(c-1);

            cout<<n<<" "<<c<<": ";
            for(int i=l; i<=h; i++ )
            {


                if(i>=0 && i<=n && i<a.size() && (i!=h && i!=n) )
                    cout<<a[i]<<" ";
                else if(i>=0 && i<=n && i<a.size() && (i==h || i==n) )
                    cout<<a[i]<<endl<<endl;
            }

        }
        else
        {
            //cout<<cc<<endl;
            cout<<n<<" "<<c<<": ";
            int i;
            for(i=0; i<cc-1 && i<a.size()-1; i++)
            {
                cout<<a[i]<<" ";
            }
            if(i==a.size()-1)
                 cout<<a[a.size()-1]<<endl<<endl;
            else
                 cout<<a[cc-1]<<endl<<endl;




        }



    }
    return 0;


}
