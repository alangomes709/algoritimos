#include<stdio.h>
#include<string.h>
int main(){
    char s1[70]="hamburguer 3d super gamer";
    char s2[20]=" tunado supremo";
    //junta independente da quantidade de caracteres
    // strcat(s1, s2);
    //junta a quantidade de caracteres especificado da var de destino
    strncat(s1, s2, 9);
    printf("S2:     %s\n", s1);
}