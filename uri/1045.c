#include<stdio.h>
int main()
{
    int i,j;
    double  ar[3],temp,a,b,c;
    for(i=0; i<3; i++)
        scanf("%lf", &ar[i]);

    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }

        }
    }
    a=ar[0];
    b=ar[1];
    c=ar[2];


    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
        printf("NAO FORMA TRIANGULO\n");


    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
        printf("TRIANGULO RETANGULO\n");

    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
        printf("TRIANGULO OBTUSANGULO\n");
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
        printf("TRIANGULO ACUTANGULO\n");

    if(a==b  &&  b==c)
        printf("TRIANGULO EQUILATERO\n");
    else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
        printf("TRIANGULO ISOSCELES\n");
    return 0;
}

