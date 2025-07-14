#include<stdio.h>
int main() {
    int num;
    printf("Digite um número inteiro\n");
    scanf("%d", &num);
    if (!(num % 5==0 && num % 3==0))
    {
        printf("Número divisivel por 5 ou por 3\n");
    }else{
        printf("O número não pode ser divisivel por 5 e 3 a25o mesmo tempo\n");
    }
    return 0;
}