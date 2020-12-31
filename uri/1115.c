#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d", &m ,&n);
    while(m!=0 && n!=0)
    {
        if(m>0 && n>0)        printf("primeiro\n");
        else if(m>0 && n<0)   printf("quarto\n");
        else if(m<0 && n<0)   printf("terceiro\n");
        else if(m<0 && n>0)   printf("segundo\n");

        scanf("%d %d", &m ,&n);
    }

    return 0;
}

