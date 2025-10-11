#include<stdio.h>
#include<string.h>
int main(){
    char s1[30]="hamburguer 3d super gamer";
    char s2[30]="hamburguer 3d super gamer";
    char s3[20]=" tunado";
    int retorno;
    // if (strcmp(s1,s2)==0)
    // {
    //     printf("iguais\n");
    // }else {
    //     printf("Diferentes\n");
    // }
    // if (strcmp(s1,s2)>0)
    // {
    //     printf("maior");
    // }
    // if (strcmp(s1,s2)<0)
    // {
    //     printf("menor");
    // }

    //sei q é redundante, daria para coloar só o else e resolveria, apenas testes
    if (strncmp(s1,s3, 10)==0)
    {
        retorno=strncmp(s1, s2, 10);
        printf("iguais\n");
        printf("retorno: %d\n", retorno);
    }else {
        retorno=strncmp(s1, s2, 10);
        printf("retorno: %d\n", retorno);
        printf("Diferentes\n");
    }
    if (strncmp(s1,s3, 10)>0)
    {
        printf("maior");
    }
    if (strncmp(s1,s3, 10)<0)
    {
        printf("menor");
    }
    
    
    // strncmp(s1, s2, 10);
    // strncat(s1, s2, 9);
    // strncpy(s2, s1, 10);
    // fgets(s1,10,stdin);
    // strlen(s1);
}