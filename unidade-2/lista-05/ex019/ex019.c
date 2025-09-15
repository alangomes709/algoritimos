#include<stdio.h>
int main(){
    int mat[5][5], math[5][5], i, j, aux, g;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
            aux=mat[i][j];
            math[i][j]=mat[i][j];
            mat[i][j]=aux;
            if (mat[i][j]==aux)
            {
                g++;
            }
            
        }
        printf("\n");
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            
        }
        

    }
}