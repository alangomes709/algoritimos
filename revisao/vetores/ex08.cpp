#include<stdio.h>
int main(){
	int vetA[10]={4,5,2,3,7,1,3,6,8,9};
	int vetB[10]={2,3,5,6,7,3,2,7,8,2};
	int vetC[10];
	int i, aux;
	for(i=0; i<10; i++){
		vetC[i]=vetA[i]*vetB[i];
	}
	
	for(int g=0; g<10; g++){
		printf("%d  ", vetA[g]);
	}
	printf("\n");
	for(int g=0; g<10; g++){
		printf("%d  ", vetB[g]);
	}
	printf("\n");
	for(int g=0; g<10; g++){
		printf("%d  ", vetC[g]);
	}
	printf("\n");
}