#include<stdio.h>
int main()
{
    int x,s=0,c=0;
    float a;
    scanf("%d", &x);
    while(x>=0)
    {
        s=s+x;
        c++;
        scanf("%d",&x);

    }
    a=s/(float)c;
    printf("%.2f\n", a);

    return 0;

}
