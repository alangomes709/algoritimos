//teste somente de aleatorização
//TESTE COM ALEATORIZADOR DE UMIDADE DE CADA PLANTA INDIVIDUAL
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

	
	srand(time(NULL));
	
	float tamanhoProp;
	int plantaMolhada;
	int umidade, umidadeMin = 1, umidadeMax = 40;
	
	float custoInteligente, consumoAguaInteligente, areaMolhada, manutencaoInteligente=1, quantPlantas=0;
	int i, j;
	for(i=0; i<10; i++){
		umidade = rand() % (umidadeMax-umidadeMin + 1) + umidadeMin;
  		printf("%d ", umidade);
  		if(umidade<25){
  			plantaMolhada++;
  			printf("Molha\n");
  			printf("\n");
		  }else {
		  	printf("Não molha\n");
		  	printf("\n");
		  }
	}
	
}