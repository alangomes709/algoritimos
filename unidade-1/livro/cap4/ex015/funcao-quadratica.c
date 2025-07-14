#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, delta;
    printf("Calculo da função quadrática.\nDada por: ax^2 + bx + c = 0\n");
    printf("Digite o coeficiente a\n");
    scanf("%f", &a);
    printf("Digite o coeficiente b\n");
    scanf("%f", &b);
    printf("Digite o coeficiente c\n");
    scanf("%f", &c);
    if (a==0)
    {
        printf("Não é equação de segundo grau!");
    }
    delta = pow(b, 2) - 4*a*c;
    printf("Delta %f\n", delta);
    if (delta<0)
    {
        printf("Não existe raiz\n");
    }else if (delta==0)
    {
        printf("Raiz unica.\n");
    }else if (delta>0)
    {
    float r1, r2;
    r1=(((-b)-sqrtf(delta))/(2*a));
    r2=(((-b)+sqrtf(delta))/(2*a));
    printf("Raiz 1 = %.3f\n", r1);
    printf("Raiz 2 = %.3f\n", r2);
    }

    return 0;
}