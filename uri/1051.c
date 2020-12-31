#include<stdio.h>
int main()
{
    double x,y,s;
    scanf("%lf", &x);

    if(x>=0 && x<=2000.00)
        printf("Isento\n");


    else if(x>=2000.01 && x<=3000.00){
          y=x-2000.00;
          s=y*0.08;
          printf("R$ %.2lf\n",s);
    }
    else if(x>=3000.01 && x<=4500.00){
            y=x-3000.00;
            s=(1000.00*0.08)+(y*0.18);
            printf("R$ %.2lf\n",s);}

    else if(x>=4500.01){
            y=x-4500.00;
            s=(1000.00*0.08)+(1500*0.18)+(y*0.28);
            printf("R$ %.2lf\n",s);}


    return 0;
}
