#include<stdio.h>
int main()
{
    double a[100];
    int i;
    scanf("%lf",&a[0]);
    for(i=1; i<=100; i++)
    {
        a[i]=a[i-1]/2.0;
    }
    for(i=0; i<100; i++)
    {

        printf("N[%d] = %.4lf\n",i,a[i]);

    }
    return 0;
}
