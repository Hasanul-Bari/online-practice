#include<stdio.h>
int main()
{
    float x,a,s;
    int p;
    scanf("%f", &x);
    if(x>=0 && x<=400.00){
        p=15;
        a=x*0.15;
        s=x+a;}
    else if(x>=400.01 && x<=800.00){
        p=12;
        a=x*0.12;
        s=x+a;}
    else if(x>=800.01 && x<=1200.00){
        p=10;
        a=x*0.10;
        s=x+a;}
    else if(x>=1200.01 && x<=2000.00){
        p=7;
        a=x*0.07;
        s=x+a;}
    else if(x>=2000.00){
        p=4;
        a=x*0.04;
        s=x+a;}

    printf("Novo salario: %.2f\n", s);
    printf("Reajuste ganho: %.2f\n", a);
    printf("Em percentual: %d %%\n", p);

    return 0;



}
