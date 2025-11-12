#include<stdio.h>
int main(){
    int i, acima=0, abaixo=0;
    float vet[6], media=0, soma=0;
    for (i = 0; i < 6; i++)
    {
        printf("Digite a nota de numero %d:   ", i);
        scanf("%f", &vet[i]);
    }

    for (i = 0; i < 6; i++)
    {
        soma+=vet[i];
    }
    media=soma/6;
    for (i = 0; i < 6; i++)
    {
        if (vet[i]>media)
        {
            acima++;
        } else {
            abaixo++;
        }
        
    }
    printf("Média: %f\n", media);
    printf("Notas acima da média: %d\n", acima);
    printf("Notas abaixo da média: %d\n", abaixo);
    
    return 0;
}