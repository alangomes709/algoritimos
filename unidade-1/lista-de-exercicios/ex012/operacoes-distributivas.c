#include<stdio.h>

int main() {
    float a, b, c, d;
    float soma;
    //int multi;

    // printf("Digite um valor para A : \n", a);
    // scanf("%d" &a);
    // printf("Digite um valor para B: \n", b);
    // scanf("%d" &b);
    // printf("Digite um valor para C: \n", c);
    // scanf("%d" &c);
    // printf("Digite um valor para D: \n", d);
    // scanf("%d" &d);

    //Soma

    printf("Digite quatro valores com espaço entre eles:");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    printf("\nResultados das Somas:\n");
    printf("A + B = %f\n", a + b);
    printf("A + C = %f\n", a + c);
    printf("A + D = %f\n", a + d);
    printf("B + C = %f\n", b + c);
    printf("B + D = %f\n", b + d);
    printf("C + D = %f\n", c + d);


    printf("%f", soma);
}