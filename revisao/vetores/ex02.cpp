#include<stdio.h>
int main(){
	int vet[10]={4,5,2,3,7,1,3,6,8,9};
	int cont=0;
	for(int i = 0; i<10; i++){
		if(vet[i]%2!=0){
			
			cont++;
			printf("%d", vet[i]);
		}
	}
	
	printf("       %d", cont);
	return 0;
}
