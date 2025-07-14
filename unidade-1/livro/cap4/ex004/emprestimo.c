#include<stdio.h>
int main () {
    float sal, empres;
    printf("Qual seu salário?");
    scanf("%f", &sal);
    printf("Quanto dinheiro para emprestimo?");
    scanf("%f", &empres);
    if (empres>sal*0.2)
    {
        printf("Emprestimo não concedido");
    }else{
        printf("Empréstimo autorizado.");
    }
    return 0;
}