#include<stdio.h>
int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    do{
        printf(" %f e %f", a, b);
    }while (a+b==10);

    return 0;
}