#include<stdio.h>
int main()
{
    int a[1000],i,n,j;
    scanf("%d", &n);
    for(i=0,j=0; i<1000; i++ )
    {

            a[i]=j;
        j++;
        if(j==n)
            j=0;
    }
    for(i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,a[i]);

    }
    return 0;
}

