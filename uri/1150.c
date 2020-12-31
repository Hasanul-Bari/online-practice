#include<stdio.h>
int main()
{
    int x,y,i,c=1;
    scanf("%d %d", &x, &y);
    while(y<=x)
    {
        scanf("%d", &y);
    }
    for(i=x ; x<=y; i++)
    {

        x=x+i;
        c++;

    }
    printf("%d\n", c);
    return 0;

}
