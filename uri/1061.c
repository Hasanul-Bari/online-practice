#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,x,y,z,w;
    printf("Dia ");
    scanf("%d",&a);
    scanf("%d %d %d", &b,&c,&d);
    printf("Dia ");
    scanf("%d",&e);
    scanf("%d %d %d", &f,&g,&h);
    if(e>a && f>b && g>c && h>d){
        z=h-d;
        y=g-c;
        x=f-b;
        w=e-a;
    }
    else if(e>a && f>b && g>c && h<d){
        w=(e*60)-a;
        x=(f-1)-b;
        y=g-c;
        z=h-d;
    }
    else if(e>a && f>b && g<c && h<d){
        w=(e*60)-a;
        x=(f-1)-b;
        y=g-c;
        z=h-d;
    }



}
