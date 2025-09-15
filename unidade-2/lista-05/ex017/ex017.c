#include<stdio.h>
int main(){
    int mat[6][6], i , j;
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            mat[i][j]=i+j;
        }
        
    }
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}