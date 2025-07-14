#include<stdio.h>
int main(){
    int estado;
    float valor;
    printf("Digite o valor do produto a ser enviado\n");
    scanf("%f", &valor);
    printf("Escolha um estado\n");

    printf("\nCódigo.....Estado......Imposto(por cento)\n");
    printf("1............MG...........7\n");
    printf("2............SP...........12\n");
    printf("3............RJ...........15\n");
    printf("4............MT...........8\n");
    scanf("%d", &estado);
    switch (estado)
    {
    case 1:
        printf("Minas Gerais. Valor com impostos: %.2f\n", (valor*0.07)+valor);
        break;
    case 2:
        printf("São Paulo. Valor com impostos: %.2f\n", (valor*0.12)+valor);
        break;
    case 3:
        printf("Rio de Janeiro. Valor com impostos: %.2f\n", (valor*0.15)+valor);
        break;
    case 4:
        printf("Mato Grosso. Valor com impostos: %.2f\n", (valor*0.08)+valor);
        break;
    
    default:
        printf("Insira um valor correspondente com o código");
        break;
    }

    return 0;
}