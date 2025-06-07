#include<stdio.h>
int main() {

    int r1, r2, r3, r4, r5;
    int somaGeral;

    printf("Responda com 1 para Sim e 0 para Não\n");
    printf("Telefonou? \n");
    scanf("%d", &r1);
    printf("Local do crime? \n");
    scanf("%d", &r2);
    printf("Mora perto? \n");
    scanf("%d", &r3);
    printf("Devendo? \n");
    scanf("%d", &r4);
    printf("Trabalhou junto? \n");
    scanf("%d", &r5);

    if (r1, r2, r3, r4, r5 !=1)
    {
        printf("erro");
    }else {
         if (r1==1)
    {
        printf("Sim\n");
    }else
    {
        printf("Não\n");
    }
    if (r2==1)
    {
        printf("Sim\n");
    }else
    {
        printf("Não\n");
    }
        if (r3==1)
    {
        printf("Sim\n");
    }else
    {
        printf("Não\n");
    }
        if (r4==1)
    {
        printf("Sim\n");
    }else
    {
        printf("Não\n");
    }
        if (r5==1)
    {
        printf("Sim\n");
    }else
    {
        printf("Não\n");
    }

    }
    

    // if (r1==1)
    // {
    //     printf("Sim\n");
    // }else
    // {
    //     printf("Não\n");
    // }
    // if (r2==1)
    // {
    //     printf("Sim\n");
    // }else
    // {
    //     printf("Não\n");
    // }
    //     if (r3==1)
    // {
    //     printf("Sim\n");
    // }else
    // {
    //     printf("Não\n");
    // }
    //     if (r4==1)
    // {
    //     printf("Sim\n");
    // }else
    // {
    //     printf("Não\n");
    // }
    //     if (r5==1)
    // {
    //     printf("Sim\n");
    // }else
    // {
    //     printf("Não\n");
    // }

    somaGeral = r1+r2+r3+r4+r5;
    printf("Soma: %d ", somaGeral);


    
    
    if (somaGeral==5)
    {
        printf("Assassino");
    }else if(somaGeral>=3)
    {
        printf("Cúmplice");
    }else if(somaGeral==2)
    {
        printf("Suspeito");
    }else if(somaGeral<=1){
        printf("Inocente");
    }
    

    return 0;

}