#include<stdio.h>
int main()
{
    int m,n,i,sum=0;;
    scanf("%d %d", &m ,&n);
    while(m!=n)
    {
        if(m<n){
                printf("Crescente\n");

        }

        else if(m>n){
                 printf("Decrescente\n");

        }
        scanf("%d %d", &m ,&n);
    }

    return 0;
}
