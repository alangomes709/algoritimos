#include<stdio.h>
int main(){
    char algo[100];
    printf("Digite palavras com espaço");
    // scanf("%s", algo);
    fgets(algo, 100, stdin);
    printf("\n%s\n", algo);
}