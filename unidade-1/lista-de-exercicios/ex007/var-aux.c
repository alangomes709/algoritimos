#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y;
    int aux;

    printf("Digite x: \n");
    scanf("%d", &x);
    printf("Digite y: \n");
    scanf("%d", y);

    aux = y;
    x = aux;
    y = x;


    printf("X: %d  \n", x);
    printf("Y: %d \n", y);
    printf("AUX: %d \n", aux);


}