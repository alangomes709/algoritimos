#include<stdio.h>
#include<stdio.h>

void decresc(int x, int n);

int main(){
    int n;
    int x=1;
    scanf("%d", &n);
    decresc(x, n);
    return 0;
}
void decresc(int x, int n){
	if (n>=x){
		printf("%d ", n);
		decresc(x, n-1);
    }
}
