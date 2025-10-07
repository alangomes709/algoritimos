#include<stdio.h>
#include<string.h>
int main(){
    char s1[15], s2[15];
    fgets(s1, 15, stdin);
    printf("S1:     %s\n", s1);
    strcpy(s2, s1);
    printf("S2:     %s\n", s2);
}