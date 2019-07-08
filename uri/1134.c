#include<stdio.h>
int main()
{
    int a=0,g=0,d=0,x;
    hp:
    scanf("%d", &x);
    while(x!=4){
    if(x==1){
        a++;
        goto hp;}
    else if(x==2){
        g++;
        goto hp;}
    else if(x==3){
        d++;
        goto hp;}
    else if(x<1 || x>4)
        goto hp;

    }



    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);

    return 0;
}
