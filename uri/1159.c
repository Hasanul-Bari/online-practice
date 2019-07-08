#include<stdio.h>
int main()
{

    int i,j,x,s=0,k;
    scanf("%d",&x);
    while(x!=0)
    {

        if(x%2==0)
        {
            for(j=0,k=x; j<5; j++)
            {
                s=s+k;
                k=k+2;
            }
        }
        else
        {
            for(j=0,k=x+1; j<5; j++)
            {
                s=s+k;
                k=k+2;
            }
        }
        printf("%d\n",s);
        s=0;
        scanf("%d", &x);
    }
    return 0;
}

