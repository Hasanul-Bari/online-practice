#include<stdio.h>
int main()
{
    int i,j,k,l;
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
    k=1;
    l=11;

    for(i=0; i<5; i++)
    {
        for(j=k; j<l; j++)
        {
                s=s+a[i][j];
        }

        k++;
        l--;
    }
    av=s/30.0;

    if(c=='S')
        printf("%.1lf\n", s);
    else if(c=='M')
        printf("%.1lf\n", av);

    return 0;



}
