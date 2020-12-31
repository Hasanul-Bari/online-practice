#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d",&a, &b,&c,&d);
    if(c>a && d>b){
        x=c-a;
        y=d-b;}
   else if(c>a && d<b){
        y=(d+60)-b;
        x=(c-1)-a;}
    else if(c<a && d<b){
        y=(d+60)-b;
        x=((c+24)-1)-a;}


    if(c==a && d==b)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);


    return 0;

}
