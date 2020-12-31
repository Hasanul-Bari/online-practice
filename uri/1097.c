#include<stdio.h>
int main()
{
    int i,j,m;
    static int n=7;
    for(i=0,m=1; i<5; i++ )
    {
        for(j=0; j<3; j++)
        {
           printf("I=%d J=%d\n",m,n);
           n--;
        }
        n=n+5;
        m=m+2;

    }



    return 0;
}

