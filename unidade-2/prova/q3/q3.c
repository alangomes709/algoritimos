#include<stdio.h>
int main(){
    int mat[4][5], i , j, g, aux;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("Digite elemento [%d] [%d]:  ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 4; i++)
    {
        aux=0;
        for ( j = 0; j < 5; j++)
        {
            for ( g = j; g < 5; g++)
            {
                if (mat[i][j]>mat[i][g]){
                    aux=mat[i][j];
                    mat[i][j]=mat[i][g];
                    mat[i][g]=aux;
                }
            }
        }
        printf("Maior elemento na linha [%d] é:  %d\n", i, mat[i][4]);
        printf("Menor elemento na linha [%d] é:  %d\n", i, mat[i][0]);
        printf("\n");   
    }
    return 0;
}