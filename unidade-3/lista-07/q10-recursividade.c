#include<stdio.h>

void cresc(int x, int n);

int main(){
    int n;
    int x=1;
    scanf("%d", &n);
    cresc(x, n);
    return 0;
}
void cresc(int x, int n){
	if (x<=n){
		printf("%d ", x);
		cresc(x+1, n);
    }
}
