//TESTE COM ALEATORIZADOR DE UMIDADE DE CADA PLANTA INDIVIDUAL
#include<stdio.h>
// #include<windows.h>
#include<stdlib.h>
#include<time.h>
int main(){
	// SetConsoleOutputCP(CP_UTF8);
	
	srand(time(NULL));
	
	float tamanhoProp;
	int plantaMolhada;
	int umidade, umidadeMin = 1, umidadeMax = 40;
	
	float custoInteligente, consumoAguaInteligente, areaMolhada, manutencaoInteligente=1, quantPlantas=0;
	int i, j;
	
	printf("Sistema inteligente: \nCusto de implementação estipulado: R$: 7,00 por metro quadrado\nConsumo de água estipulado: 2,5L por metro quadrado.\n");
	printf("\n");
    printf("Determine a área da sua propriedade em metros quadrados:");
    scanf("%f", &tamanhoProp);
    
    
//	printf("Digite a porcentagem da área já molhada: ");
//	scanf("%f", &areaMolhada);
	
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
	printf("\n");
	printf("Plantas para molhar: %d", plantaMolhada);
	
	quantPlantas=tamanhoProp;
	for (i=0; i<=15; i++){
		for(j=0; j<quantPlantas; j++){
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
		//i == numero de dias molhado
		consumoAguaInteligente=(2.5*tamanhoProp)*i*plantaMolhada;
	}
	printf("Num sistema nteligente, a quantidade de água consumida em quinze dias é de: %.1f L/m^2\n", consumoAguaInteligente);
	
	consumoAguaInteligente=(2.5*tamanhoProp)*(areaMolhada/100);
	printf("O custo financeiro da implementação é R$ %.2f \n ", custoInteligente);
	//comparação com o sistema tradicional
	// consumoAguaTrad=5*tamanhoProp;
	// printf("Num sistema tradicional\n voce gastaria %.2f litros em água\n", consumoAguaTrad);
	// printf("A diferença do consumo de água é de: %.2f litros\n", consumoAguaTrad-consumoAguaInteligente);
}