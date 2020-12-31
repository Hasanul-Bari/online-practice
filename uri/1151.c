#include<stdio.h>
int main()
{
    int x;
    long int t1=0,t2=1,temp,i;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        if(i==x)
            printf("%ld\n",t1);
        else
            printf("%ld ",t1);

        temp=t1+t2;
        t1=t2;
        t2=temp;
    }
    return 0;

}
