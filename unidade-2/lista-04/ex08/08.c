#include<stdio.h>
int main() {
    int num, i;
    printf("Digite num ");
    scanf("%d", &num);
    for ( i = 0; i < num; i++)
    {
        for (size_t j = 0; j < num; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    
}