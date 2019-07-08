#include<stdio.h>
int main()
{
    float A,B,C,p,a;
    scanf("%f %f %f", &A ,&B,&C);
    if(A+B>C && A+C>B && B+C>A)
    {
        p=A+B+C;
        printf("Perimetro = %.1f\n",p);

    }
    else
    {
        a=((A+B)*C)/2;
        printf("Area = %.1f\n",a);

    }
    return 0;
}
