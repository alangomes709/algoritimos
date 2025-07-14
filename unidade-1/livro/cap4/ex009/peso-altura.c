#include<stdio.h>
int main() {
    float altura, peso;
    printf("Qual a sua altura?");
    scanf("%f", &altura);
    printf("QUal o seu peso?");
    scanf("%f", &peso);
    if (altura<1.20 && peso<60)
    {
        printf("Você é A");
    }else if (altura>1.20 && altura<1.70 || peso>60 && peso<90)
    {
        /* code */
    }
    
}