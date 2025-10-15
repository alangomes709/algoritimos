//SISTEMA TRADICIONAL
#include<stdio.h>
#include<stdlib.h>

int main(){

	int plantaMolhada=0, naoMolha=0;
	float tamanhoProp;
    float custoTrad,  consumoAguaTrad, manutencaoTrad=1;
	int i, j, precisaMolhar;
	float quantPlantas;

    printf("Simulação:\n");
    //leitura de dados para calculo do volume total de água utilizado, sabendo a demanda hídrica da cultura
    printf("Sistema tradicional utilizando aspersão: \nCusto de implementação estipulado: R$: 5,00 por metro quadrado\nConsumo de água estipulado: 5L por metro quadrado.\n");
	printf("\n");
    printf("Determine a área da sua propriedade em metros quadrados:");
    scanf("%f", &tamanhoProp);
    quantPlantas=tamanhoProp;
    //calculo consumo de agua
	for (i=1; i<=15; i++){
		for(j=0; j<=quantPlantas; j++){
	  			precisaMolhar++;
			}
		}
		//i == numero de dias molhado
		consumoAguaTrad=5*precisaMolhar;
	
	printf("A quantidade de água consumida em quinze dias é de: %.1f L/m^2\n", consumoAguaTrad);
    
    return 0;
}
    
