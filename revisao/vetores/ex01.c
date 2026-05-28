#include<stdio.h>
int main(){
	int vet[10]={4,5,2,3,7,1,3,6,8,9};
	int esc;
	scanf("%d", &esc);
	if(esc==0){
		return 0;
	}else if(esc==1){
		for(int i = 0; i<10; i++){
			printf("%d", vet[i]);
		}
		
	} else if(esc==2){
		for(int i = 9; i>0; i--){
			printf("%d", vet[i]);
		}
		
	}
	return 0;
}