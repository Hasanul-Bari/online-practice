#include<bits/stdc++.h>
using namespace std;
int a[9][9];
int h;

void fun(int r,int c,int k)
{
    h=h+1;
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            if( (  (abs(i-r)*abs(i-r)) + (abs(j-c)*abs(j-c))  )<=2 && a[i][j]==0)
            {
                 a[i][j]=a[r][c]++;
                 if(k>=h)
                    fun(i,j,k);
            }

        }
    }

}


int main()
{
    int r,c,k;
    cin>>r>>c>>k;

    h=1;

    h=h+1;
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            if( (  (abs(i-r)*abs(i-r)) + (abs(j-c)*abs(j-c))  )<=2 && a[i][j]==0)
            {
                a[i][j]++;

                if(k>=h )
                    fun(i,j,k);

            }

        }
    }

    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
