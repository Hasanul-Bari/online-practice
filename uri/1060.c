#include<stdio.h>
int main()
{
    float a[6];
    int c=0,i;
    for(i=0; i<6; i++)
    {
        scanf("%f", &a[i]);
    }
    for(i=0; i<6; i++)
    {
        if(a[i]>0){
            c++;}
    }
    printf("%d valores positivos\n",c);
    return 0;
}
