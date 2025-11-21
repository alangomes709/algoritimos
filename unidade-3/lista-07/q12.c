#include<stdio.h>
int somav(int v[], int tamV);
int main(){
    int vetor[6]={1,6,2,7,3,5};
    int tamVetor;
    scanf("%d", &tamVetor);
    printf("Soma: %d", somav(vetor, tamVetor));
    return 0;
}

int somav(int v[], int tamV){
    int soma=0, pos=0;
    soma=somav(v[pos+1], tamV);
    return soma;
}