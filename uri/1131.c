#include<stdio.h>
int main()
{
    int x,y,m,i=0,g=0,d=0,k=0;
    hp:
    scanf("%d %d", &x, &y);
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&m);

        if(x>y)
            i++;
        else if(x<y)
            g++;
        else if(x==y)
            d++;
        k++;
        if(m==1 && m!=2){
            goto hp;
        }

    printf("%d grenais\n",k);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",g);
    printf("Empates:%d\n",d);
    if(i>g)
        printf("Inter venceu mais\n");
    else if(i<g)
        printf("Gremio venceu mais\n");
    else if(i==g)
        printf("Não houve vencedor\n");






    return 0;


}
