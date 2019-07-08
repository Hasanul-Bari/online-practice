#include<stdio.h>
int main()
{
    int a[20],i,b[20],j;
    for(i=0; i<20; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0,j=19; i<20; i++,j--)
    {

        b[j]=a[i];


    }
     for(j=0; j<20; j++)
    {

        printf("N[%d] = %d\n",j,b[j]);

    }
    return 0;
}

