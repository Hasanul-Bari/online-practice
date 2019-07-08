#include<stdio.h>
int main()
{
    int n,i,min,a[1005],c=0;
    scanf("%d",&n);
    for(i=0;  i<n;  i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0; i<n; i++)
    {
        if(min>a[i]){
            min=a[i];
            c=i;}
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",c);

    return 0;

}
