#include<stdio.h>

int maior_elemento(int v[], int n);

int main(){
    int i;
    int tamVetor;
    int algo[100];
    printf("Digite o tamanho do vetor (100 lim): ");
    scanf("%d", &tamVetor);
    if (tamVetor>100  || tamVetor<0)
    {
        printf("Valor inválido\n");
    } else{
            for ( i = 0; i < tamVetor; i++)
            {
                printf("Elemento pos %d:  ", i);
                scanf("%d", &algo[i]);
            }
    
            printf("maior elemento no vetor é: %d \n", maior_elemento(algo, tamVetor));
    }

    return 0;
}

int maior_elemento(int v[], int n){
    int i, j, maior=0;
    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            if (v[i]>v[j])
            {
                maior=v[i];
                v[i]=v[j];
                v[j]=maior;
            }
        }
    }
    return maior;
    
}