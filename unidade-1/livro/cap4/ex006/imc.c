#include<stdio.h>
int main(){
    float altura;
    char sexo;
    printf("Qual a sua altura?(em metros)");
    scanf("%f", &altura);
    printf("Homem-H ou mulher-M?");
    scanf(" %c", &sexo);
    switch (sexo)
    {
    case 'H':
        printf("Seu peso ideal é: %f", (altura*72.7)-58);
        break;
    case 'M':
        printf("Seu peso deal é %f", (altura*62.1)-44.7);
        break;
    default:
        break;
    }
    return 0;
}