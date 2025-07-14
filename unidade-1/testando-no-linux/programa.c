#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    srand(time(NULL));
    int x;
    printf("Hello");
    // scanf("%d", &x);
    printf("%d", x=rand()%3);
    return 0;
}