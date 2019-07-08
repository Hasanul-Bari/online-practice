#include<stdio.h>
int main()
{
    char s1[25],s2[25],s3[25],s4[25];
    gets(s1);
    gets(s2);
    gets(s3);
    if(strcmp(s1,"vertebrado")==0){
        if(strcmp(s2,"ave")==0){
            if(strcmp(s3,"carnivoro")==0)           printf("aguia\n");
            else if(strcmp(s3,"onivoro")==0)        printf("pomba\n");}
        else if(strcmp(s2,"mamifero")==0){
            if(strcmp(s3,"onivoro")==0)           printf("homem\n");
            else if(strcmp(s3,"herbivoro")==0)        printf("vaca\n");}}


    if(strcmp(s1,"invertebrado")==0){
        if(strcmp(s2,"inseto")==0){
            if(strcmp(s3,"hematofago")==0)           printf("pulga\n");
            else if(strcmp(s3,"herbivoro")==0)        printf("lagarta\n");}
        else if(strcmp(s2,"anelideo")==0){
            if(strcmp(s3,"hematofago")==0)           printf("sanguessuga\n");
            else if(strcmp(s3,"onivoro")==0)        printf("minhoca\n");}}

    return 0;




}
