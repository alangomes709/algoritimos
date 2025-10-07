#include<stdio.h>
int main(){
    char algo[100];
    int i;
    printf("Digite algo: ");
    scanf("%s", algo);
    for ( i = 0; i<100; i++)
    {
        if (algo[i]=='\0')
        {
            printf("O número de caracteres digitados é de: %d\n", i);
            break;
        }
    }
}
// #include<stdio.h>
// int main(){
//     char algo[100];
//     int i;
//     printf("Digite algo: ");
//     scanf("%s", algo);
//     for ( i = 0; algo[i]!='\0'; i++)
//     {
//         printf("O número de caracteres digitados é de: %d\n", i);
//     }
// }