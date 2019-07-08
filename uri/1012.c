#include<stdio.h>
#define pi 3.14159

int main()
{
    double A,B,C,t,c,tp,s,r;
    scanf("%lf %lf %lf", &A, &B, &C);
    t=(A*C)/2;
    c=pi*C*C;
    tp=((A+B)*C)/2;
    s=B*B;
    r=A*B;
    printf("TRIANGULO: %.3lf\n", t);
    printf("CIRCULO: %.3lf\n",c);
    printf("TRAPEZIO: %.3lf\n",tp);
    printf("QUADRADO: %.3lf\n",s);
    printf("RETANGULO: %.3lf\n",r);


    return 0;


}
