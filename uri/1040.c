#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,w,x,y,z,avg,p,avg2;
    scanf("%f %f %f %f", &N1,&N2,&N3,&N4);
    w=N1*2;
    x=N2*3;
    y=N3*4;
    z=N4*1;
    avg=(w+x+y+z)/10;
    printf("Media: %.1f\n",avg);
    if(avg>=7.0)
        printf("Aluno aprovado.\n");
    else if(avg<5.0)
        printf("Aluno reprovado.\n");
    else if(avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &p);
        printf("Nota do exame: %.1f\n", p);
        avg2=(avg+p)/2;
        if(avg2>=5.0)
            printf("Aluno aprovado.\n");
        else if(avg2<=4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",avg2);
    }

    return 0;




}
