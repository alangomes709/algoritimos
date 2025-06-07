#include <stdio.h>

int main() {
    int r1, r2, r3, r4, r5;
    int total;
    printf("Responda com '1' para Sim e '0' para Não\n");
    printf("Telefonou para a vítima? ");
    scanf("%d", &r1);
    printf("Esteve no local do crime? ");
    scanf("%d", &r2);
    printf("Mora perto da vítima? ");
    scanf("%d", &r3);
    printf("Devia para a vítima? ");
    scanf("%d", &r4);
    printf("Já trabalhou com a vítima? ");
    scanf("%d", &r5);
    
    //calculo

    total=r1+r2+r3+r4+r5;
    
    if(total>=6){
        printf("Erro! coloque apenas 0 ou 1");
    }
    
    if(total<=-1){
        printf("Erro! coloque apenas 0 ou 1");
    }
     if(r1!=0){
        if(r1!=1){
            printf("Erro! coloque apenas 0 ou 1");
            return 0;
        }
    }
     if(r2!=0){
        if(r2!=1){
            printf("Erro! coloque apenas 0 ou 1");
            return 0;
        }
    }
     if(r3!=0){
        if(r3!=1){
            printf("Erro! coloque apenas 0 ou 1");
            return 0;
        }
    }
     if(r4!=0){
        if(r4!=1){
            printf("Erro! coloque apenas 0 ou 1");
            return 0;
        }
    }
     if(r5!=0){
        if(r5!=1){
            printf("Erro! coloque apenas 0 ou 1");
            return 0;
        }
    }
    
    if(total==2){
        printf("Classificação: Suspeita");
        }else if(total==5){
            printf("Classificação: Assassino");
        }else if(total==3){
            printf("Classificação: Cúmplice");
        }else if(total==4){
            printf("Classificação: Cúmplice");
        }else if(total==0){
            printf("Classificação: Inocente");
        }else if(total==1){
            printf("Classificação: Inocente");
        }
    
    return 0;
}