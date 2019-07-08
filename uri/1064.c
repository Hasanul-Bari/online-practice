#include<stdio.h>
int main()
{
    float a[6],avg,s=0;
    int c=0,i;
    for(i=0; i<6; i++)
    {
        scanf("%f", &a[i]);
    }
    for(i=0; i<6; i++)
    {
        if(a[i]>0){
            c++;
            s=s+a[i];
            }
    }
    avg=s/c;

    printf("%d valores positivos\n",c);
    printf("%.1f\n",avg);
    return 0;
}
