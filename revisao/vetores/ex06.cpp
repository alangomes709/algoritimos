#include<stdio.h>
int main(){
	int vet[10]={4,5,2,3,7,1,3,6,8,9};
	int aux;
//	for(int j=0; j<10; j++){
//		for(int i=0; i<10-1; i++){
//			if(vet[i]>vet[i+1]){
//				aux=vet[i];
//				vet[i]=vet[i+1];
//				vet[i+1]=aux;
//			}
//		}
//	}
	int i, j;
	for(i=0; i<10; i++){
		for(j=i; j<10; j++){
			if(vet[i]>vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}


	for(int g=0; g<10; g++){
		printf("%d", vet[g]);
	}
}