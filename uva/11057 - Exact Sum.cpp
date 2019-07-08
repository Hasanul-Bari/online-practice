#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,x,y;
    while(cin>>n)
    {

        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        /*for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;*/
        cin>>m;


        //cout<<binary_search(a,a+n,100);
        int hp,j;
        if(m%2==0)
            hp=m/2;
        else
            hp=(m/2)+1;

        int i=lower_bound(a,a+n,hp)-a;
        for(  ; i>=0; i--)
        {

            if(binary_search(a,a+n,m-a[i]))
            {
                if(a[i]==m-a[i])
                {
                    j=lower_bound(a,a+n,a[i])-a;
                    if(a[j]==a[j+1])
                    {
                        x=a[i];
                        y=m-a[i];
                        break;
                    }
                }
                else if(a[i]!=(m-a[i]))
                {

                    x=a[i];
                    y=m-a[i];
                    break;
                }

            }
        }

        cout<<"Peter should buy books whose prices are "<<min(x,y)<<" and "<<max(x,y)<<"."<<endl<<endl;


    }


    return 0;
}

