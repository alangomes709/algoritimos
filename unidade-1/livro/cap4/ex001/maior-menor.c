#include<stdio.h>
int main () {
    int x, y;
    printf("Digite um número");
    scanf("%d", &x);
    printf("Digite um número");
    scanf("%d", &y);
    if (x>y)
    {
        printf("%d é maior", x);
    }else{
        printf("%d é maior", y);
    }
    return 0;
}