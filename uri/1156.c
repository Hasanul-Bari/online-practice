#include<stdio.h>
int main()
{

    float i,j,s=1.0;
    for(i=3,j=2; i<=39; i=i+2,j=j*2)
    {
        s=s+(i/j);

    }
    printf("%.2f\n",s);
    return 0;
}
