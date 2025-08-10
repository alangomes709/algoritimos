#include<stdio.h>
int main(){
    int a, b;
    // scanf("%d", &a);
    // scanf("%d", &b);
    do
    {
        scanf("%d", &a);
        a++;
        printf("a: %d\n", a);
    }while (a>0);
    
    return 0;
}