#include<stdio.h>
int main() {
    int div, num, i;
    printf("Digite num ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            div=div+i;
        }
    }

    if (div==2)
    {
        printf("Primo");
    }else{
        printf("Não primo");
    }
    
   
}