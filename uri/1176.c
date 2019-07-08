#include<stdio.h>
int main()
{
    int n,i,x,j;
    long long int t1,t2,temp;
    scanf("%d",&x);
    for(i=0; i<x; i++){
    t1=0;
    t2=1;
    scanf("%d",&n);
    if(n==0)
        printf("Fib(%d) = %lld\n",n,t1);
    else if (n==1)
        printf("Fib(%d) = %lld\n",n,t2);

    else{
    for(j=1; j<n; j++)
    {

        temp=t1+t2;
        t1=t2;
        t2=temp;

    }
    printf("Fib(%d) = %lld\n",n,temp);}}

    return 0;

}
