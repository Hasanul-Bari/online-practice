#include<stdio.h>
int main()
{
    int a,n,j,s=0;
    scanf("%d %d", &a ,&n);

    while(n==0){
        scanf("%d", &n);}

    for(j=0; j<n; j++,a++)
    {
        s=s+a;
    }
    printf("%d\n",s);

    return 0;
}
