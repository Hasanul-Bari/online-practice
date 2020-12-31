#include<stdio.h>
int main()
{
    float N;
    unsigned int a,b,c,d,e,f,g,h,k,l,m,n,x;
    scanf("%f", &N);
    x=(N*100);


    a=x/10000;
    b=(x%10000)/5000;
    c=((x%10000)%5000)/2000;
    d=(((x%10000)%5000)%2000)/1000;
    e=((((x%10000)%5000)%2000)%1000)/500;
    f=(((((x%10000)%5000)%2000)%1000)%500)/200;

    g=((((((x%10000)%5000)%2000)%1000)%500)%200)/100;
    h=(((((((x%10000)%5000)%2000)%1000)%500)%200)%100)/50;
    k=((((((((x%10000)%5000)%2000)%1000)%500)%200)%100)%50)/25;
    l=(((((((((x%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)/10;
    m=((((((((((x%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)%10)/5;
    n=(((((((((((x%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)%10)%5)/1;
    printf("NOTAS:\n");
    printf("%u nota(s) de R$ 100.00\n",a);
    printf("%u nota(s) de R$ 50.00\n",b);
    printf("%u nota(s) de R$ 20.00\n",c);
    printf("%u nota(s) de R$ 10.00\n",d);
    printf("%u nota(s) de R$ 5.00\n",e);
    printf("%u nota(s) de R$ 2.00\n",f);


    printf("MOEDAS:\n");
    printf("%u moeda(s) de R$ 1.00\n",g);
    printf("%u moeda(s) de R$ 0.50\n",h);
    printf("%u moeda(s) de R$ 0.25\n",k);
    printf("%u moeda(s) de R$ 0.10\n",l);
    printf("%u moeda(s) de R$ 0.05\n",m);
    printf("%u moeda(s) de R$ 0.01\n",n);




    return 0;
}
