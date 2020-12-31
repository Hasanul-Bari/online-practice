#include<stdio.h>
int main()
{
    int n,x,i,c=0,c1=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(x>=10 && x<=20)
            c++;
        else
            c1++;
    }
    printf("%d in\n",c);
    printf("%d out\n",c1);
    return 0;

}
