#include<stdio.h>
int main()
{
    int X,Y;
    float x,y;
    scanf("%d %d",&X, &Y);
    switch(X)
    {
        case 1:
            x=4.00;
            break;
        case 2:
            x=4.50;
            break;
        case 3:
            x=5.00;
            break;
        case 4:
            x=2.00;
            break;
        case 5:
            x=1.50;
            break;

    }
    y=x*Y;
    printf("Total: R$ %.2f\n",y);
    return 0;


}
