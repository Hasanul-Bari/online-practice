#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,r1,r2,D;
    scanf("%f %f %f", &A,&B,&C);
    D=(B*B)-4*A*C;

    if(D<0 || A==0)
        printf("Impossivel calcular\n");
    else
    {
        r1=(-B+sqrt(D))/(2*A);
        r2=(-B-sqrt(D))/(2*A);
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
    return 0;
}
