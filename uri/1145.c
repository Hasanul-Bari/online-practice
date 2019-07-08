#include<stdio.h>
int main()
{
    int x,y,j,i;
    scanf("%d %d", &x, &y);
    for(i=1,j=0; i<=y; i++ )
    {
        j++;
        if(j==x){
             printf("%d\n",i);
             j=0;
        }
        else{
            printf("%d ", i);}

    }
    return 0;


}

