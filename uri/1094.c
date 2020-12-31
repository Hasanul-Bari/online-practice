#include<stdio.h>
int main()
{
    int x,i,n,sum=0,co=0,r=0,s=0;
    float pco,pr,ps;
    char c;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %c",&x,&c);
        sum=sum+x;
        if(c=='C')
            co=co+x;
        else if(c=='R')
            r=r+x;
        else if(c=='S')
            s=s+x;
    }
    pco=(co*100.0)/sum;
    pr=(r*100.0)/sum;
    ps=(s*100.0)/sum;

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",co);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",pco);
    printf("Percentual de ratos: %.2f %%\n",pr);
    printf("Percentual de sapos: %.2f %%\n",ps);

    return 0;


}
