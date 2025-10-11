#include<stdio.h>
#include<string.h>
int main(){
    char s1[15], s2[15];
    fgets(s1, 15, stdin);
    printf("S1:     %s\n", s1);
    //copia o maximo de caracteres possiveis:
    //strcpy(s2, s1);
    //copia a quantidade de caracteres especificado; CUIDADO: se sobrar espaço vai exibir lixo da memória
    strncpy(s2, s1, 10);
    printf("S2:     %s\n", s2);
}