#include<stdio.h>
int main()
{

    int i=0,x;
    float n,a,s=0.0;
    hp:

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
    i=0;
    s=0.0;
    hp1:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);
    if(x!=1 && x!=2)
        goto hp1;
    else if(x==1)
        goto hp;
    else if(x==2)




    return 0;
}


