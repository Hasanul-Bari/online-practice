#include<stdio.h>
int main()
{
    int n,i;
    float a,b,c,x,y,z,w;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%f %f %f",&a ,&b ,&c);
        x=a*2;
        y=b*3;
        z=c*5;
        w=(x+y+z)/10;
        printf("%0.1f\n",w);

    }
    return 0;
}
