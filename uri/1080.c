#include<stdio.h>
int  main()
{
    int ary[100],i,max,c;
    for(i=0; i<100; i++)
    {
        scanf("%d", &ary[i]);
    }
    max=ary[0];
    for(i=0; i<100; i++)
    {
        if(ary[i]>max){
            max=ary[i];
            c=i+1;
            }


    }
    printf("%d\n",max);
    printf("%d\n",c);


    return 0;
}
