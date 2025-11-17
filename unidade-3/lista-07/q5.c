#include<stdio.h>

int indice_maximo(int v[], int n);

int main(){
    int tamVetor=7;
    int algo[]={2,7,43,7,154,89,23,6};
    printf("maior elemento no vetor é: %d \n", indice_maximo(algo, tamVetor));
}

int indice_maximo(int v[], int n){
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