#include<stdio.h>
int main()
{
    int n,i;
    long int f;
    scanf("%d", &n);
    f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("%ld\n", f);
    return 0;
}
