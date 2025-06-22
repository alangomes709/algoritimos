#include<stdio.h>
int main() {
    int n1, n2, n3;
    int mediaA, mediaP, resp;

    printf("Digite as notas para caular a média\n");
    printf("Digite a primeira nota\n");
    scanf("%d", &n1);
    printf("Digite a segunda nota\n");
    scanf("%d", &n2);
    printf("Digite a terceira nota\n");
    scanf("%d", &n3);

    mediaA = (n1 + n2 + n3)/3;
    mediaP = ((n1*3) + (n2*3) + (n3*4))/10;
    //escolha
    printf("Que tipo de média gostaria de calcular?\nDigite 1 para ponderada e 2 para aritmética.");
    scanf("%d", &resp);
    switch (resp)
    {
    case 1:
        printf("Média ponderada: %d", mediaP);
        break;
    case 2:
        printf("Média aritmética: %d", mediaA);
        break;
    default:
        break;
    }
}