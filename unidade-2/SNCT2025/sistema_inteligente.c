//TESTE COM ALEATORIZADOR DE UMIDADE DE CADA PLANTA INDIVIDUAL
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	
	float tamanhoProp;
	int precisaMolhar=0, naoMolha=0;
	int umidade, umidadeMin = 1, umidadeMax = 40;
	float consumoAguaInteligente;
	float quantPlantas=0;
	int i, j;
	
	printf("Sistema inteligente: \nCusto de implementação estipulado: R$: 7,00 por metro quadrado\nConsumo de água estipulado: (para ser justo) 5L  por metro quadrado.\n");
	printf("\n");
    printf("Determine a área da sua propriedade em metros quadrados:");
    scanf("%f", &tamanhoProp);
    
	
    quantPlantas=tamanhoProp;
	for (i=1; i<=15; i++){
		for(j=0; j<=quantPlantas; j++){
			umidade = rand() % (umidadeMax-umidadeMin + 1) + umidadeMin;
	  		if(umidade<25){
	  			precisaMolhar++;
			}else{
				naoMolha++;
			}
		}
		//5 == consumo de agua (L) por planta
		consumoAguaInteligente=5*precisaMolhar;
	}
	printf("Num sistema inteligente, a quantidade de água consumida em quinze dias é de: %.1f L\n", consumoAguaInteligente);
	
	return 0;
	
}