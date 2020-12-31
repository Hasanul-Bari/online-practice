#include<stdio.h>
int main()
{
    int i,j,m,n;
    for(i=0,m=1; i<5; i++ )
    {
        for(j=0,n=7; j<3; j++)
        {
           printf("I=%d J=%d\n",m,n);
           n--;
        }
        m=m+2;

    }



    return 0;
}
