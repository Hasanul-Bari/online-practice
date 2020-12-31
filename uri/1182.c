#include<stdio.h>
int main()
{
    int i,j,n;
    char c;
    double a[12][12],s=0.0,av;

    scanf("%d %c", &n,&c);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }

    for(i=0,j=n; i<12; i++)
    {
        s=s+a[i][j];
    }
    av=s/12.0;

    if(c=='S')
        printf("%.1lf\n", s);
    else if(c=='M')
        printf("%.1lf\n", av);

    return 0;



}
