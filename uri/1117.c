#include<stdio.h>
int main()
{
    int i=0;
    float n,a,s=0.0;

    while(i<2)
    {
        scanf("%f",&n);
        if(n>=0.0 && n<=10.0)
        {
            i++;
            s=s+n;
        }
        else
        {
            printf("nota invalida\n");

        }
    }

    a=s/2.0;
    printf("media = %.2f\n",a);
    return 0;
}
