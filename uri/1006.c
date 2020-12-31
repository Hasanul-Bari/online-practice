#include<stdio.h>
int main()
{
    double A,B,C,a,b,c,avg;
    scanf("%lf %lf %lf",&A, &B , &C);
    a=A*2;
    b=B*3;
    c=C*5;
    avg=(a+b+c)/10;
    printf("MEDIA = %.1lf\n", avg);
    return 0;


}
