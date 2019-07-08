#include<stdio.h>
int main()
{
    int  n,x, y,i;
    float m;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        if(y!=0)
        {
            m=x/(float)y;
            printf("%.1f\n",m);
        }
        else
            printf("divisao impossivel\n");

    }
    return 0;

}
