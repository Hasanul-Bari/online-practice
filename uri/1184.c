#include<stdio.h>
int main()
{
    int i,j;
    char c;
    double a[12][12],s=0.0,av;

    scanf("%c",&c);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            if(i>j)
                s=s+a[i][j];
        }
    }
    av=s/66.0;

    if(c=='S')
        printf("%.1lf\n", s);
    else if(c=='M')
        printf("%.1lf\n", av);

    return 0;



}

