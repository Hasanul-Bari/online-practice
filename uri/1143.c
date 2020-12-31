#include<stdio.h>

int main()
{
    int a=1,b=1,c=1,n,i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d %d %d\n",a,b,c);
        a++;
        b=a*a;
        c=a*a*a;
    }
    return 0;


}
