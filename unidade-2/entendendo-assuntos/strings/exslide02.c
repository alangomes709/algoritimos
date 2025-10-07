
#include<stdio.h>
int main(){
    char s1[20], s2[20];
    int i;
    scanf("%s", s1);
    for ( i = 0; s1[i]!='\0'; i++)
    {
        s2[i]='\0';
        s2[i]=s1[i];
    }
    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);

}