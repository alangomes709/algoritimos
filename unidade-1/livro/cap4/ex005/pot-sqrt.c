#include<stdio.h>
#include<math.h>
int main() {
    float num, raiz;
    printf("Digite um número\n");
    scanf("%f", &num);
    if (num>0)
    {
        printf("Quadrado: %f", num);
        raiz = sqrtf(num);
        printf("Raiz quadrada: %f", raiz);
    }else{
        printf("Insira um número positivo");
    }
    return 0;
}