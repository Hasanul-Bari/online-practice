#include<stdio.h>
int main()
{
    int n,i,x,y,sum=0,j;
    scanf("%d", &n);
    for(j=0; j<n; j++)
    {
        scanf("%d %d",&x, &y);
        if(x<=y){
            for(i=x+1; i<y; i++)
            {
                if((i%2)!=0){
                    sum=sum+i;
                }
            }}
        else if(x>y){
            for(i=x-1; i>y; i--)
            {
                if((i%2)!=0){
                    sum=sum+i;
                }
            }}
            printf("%d\n", sum);
            sum=0;

        }
    return 0;

}
