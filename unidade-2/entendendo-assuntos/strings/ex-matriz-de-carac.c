#include<stdio.h>
int main(){
    char algo[5][100], aux[5];
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        printf("Digite algo\n");
        scanf("%s", algo[i]);
    }
    // for ( i = 0; i < 5; i++)
    // {
    //     printf("%s\n", algo[i]);
    // }
    printf("Dgite para buscar: ");
    scanf("%s", aux);
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; (algo[i][j]!='\0') && (algo[i][j]== aux[j]); j++);
        
            if ((algo[i][j]=='\0') && (aux[j]=='\0'))
                printf("o índice no vetor é: %d\n", i);
        
    }
}