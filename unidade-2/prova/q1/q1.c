#include<stdio.h>
int main(){
    int ini=0, iniA, fim=0, m, i, cont=0, zeroCounter=0;
    printf("Digite início: ");
    scanf("%d", &ini);
    printf("Digite fim: ");
    scanf("%d", &fim);
    printf("Digite o número que deseja verificar: ");
    scanf("%d", &m);
    iniA=ini;
    printf("Múltiplos: ");
    for (i=ini; i < fim; i=ini++)
    {   
        if (ini==0)
        {
            zeroCounter++;
        } else if (ini%m==0){
            cont++;
            printf("%d   ", ini);
        }
    }
    printf("\nInicio: %d\n", iniA);
    printf("Fim: %d\n", fim);
    printf("Quant de multiplos: %d\n", cont);

    return 0;
}