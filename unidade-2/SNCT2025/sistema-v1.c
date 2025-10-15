#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//para não fincar tão vago, acho que seria interessante especificar a cultura, a frequncia de irrigação, frequência de manutenção do sistema;
//características das culturas da propriedade: sorgo por exemplo; quant água varia de acordo com o desenvolvimento, creio que só explicar, não considerar na simulação;
//tipo de irrigação: mangueiras, aspersão...
//clima da região de irece: tempo de chuva/seca;

// daria para usar "for" na frequncia de irrigação e frequência de manutenção do sistema 

//manutenção do sistema
//unidades de medida
//tamanho da propriedade
//custo num espaço determinado

int main(){
	SetConsoleOutputCP(CP_UTF8);
	float tamanhoProp;
    float custoTrad,  consumoAguaTrad, manutencaoTrad;
    float custoInteligente, consumoAguaInteligente, areaMolhada, manutencaoInteligente;
	int opcaoAreaMolhada, escolhaTipoSistema;
	int i, frequenciaIrrigacao, frequenciaManutencao;

    printf("Simulação:\n");
    printf("Comparação do consumo de água entre um sistema tradicional e um sistema inteligente na irrigação.\n");
    //leitura de dados para calculo do volume total de água utilizado, sabendo a demanda hídrica da cultura
    printf("Sistema tradicional utilizando aspersão: \nCusto de implementação estipulado: R$: 5,00 por metro quadrado\nConsumo de água estipulado: 5L por metro quadrado.\n");
	printf("\n");
    printf("Sistema inteligente: \nCusto de implementação estipulado: R$: 7,00 por metro quadrado\nConsumo de água estipulado: 2,5L por metro quadrado.\n");
	printf("\n");
    printf("Determine a área da sua propriedade em metros quadrados:");
    scanf("%f", &tamanhoProp);
    printf("Qual sistema você aplicaria?");
	printf("Sistema tradicional....1 \nSistema inteligente....2\n");
	scanf("%d", &escolhaTipoSistema);
	
	if(escolhaTipoSistema==1){
		consumoAguaTrad=5*tamanhoProp;
		printf("A quantidade de L/m é: %.2f\n", consumoAguaTrad);
		custoTrad=tamanhoProp*5;
		printf("O custoFinanceiro da implementação de um sistema tradicional é R$ %.2f \n", custoTrad);
	}
	if(escolhaTipoSistema==2){
        printf("No caso do sistema inteligente aplicado, há sensores de umidade e temperatura em cada planta e verifica se precisa ou não ser regada.\n");
        printf("Caso a área já esteja molhada, o consumo de água será menor.\n");
        printf("Qual a condição da sua área?\n");
		printf("Área já molhada....3\nNão molhada....4 \n");
		scanf("%d", &opcaoAreaMolhada);
		switch(opcaoAreaMolhada){
			case 3:
				printf("Digite a porcentagem da área já molhada: ");
				scanf("%f", &areaMolhada);
				consumoAguaInteligente=(2.5*tamanhoProp)*(areaMolhada/100);
				printf("Caso a área já esteja molhada, a quantidade de água em L/m é: %.2f\n", consumoAguaInteligente);
				custoInteligente=(tamanhoProp*7);
				printf("O custo financeiro da implementação é R$ %.2f \n ", custoInteligente);
				//comparação com o sistema tradicional
				consumoAguaTrad=5*tamanhoProp;
				printf("Num sistema tradicional\n voce gastaria %.2f litros em água\n", consumoAguaTrad);
				printf("A diferença do consumo de água é de: %.2f litros\n", consumoAguaTrad-consumoAguaInteligente);
				break;
			case 4:
				consumoAguaInteligente=2.5*tamanhoProp;
				printf("quantidade de água em L/m é: %.2f", consumoAguaInteligente);
				custoInteligente=tamanhoProp*7;
				printf("O custo financeiro da implementação é R$ %.2f \n", custoInteligente);
				//comparação com o sistema tradicional
				consumoAguaTrad=5*tamanhoProp;
				printf("Num sistema tradicional\n voce gastaria %.2f litros em água\n", consumoAguaTrad);
				printf("A diferença do consumo de água é de: %.2f litros\n", consumoAguaTrad-consumoAguaInteligente);
				break;
		}
	}
	
	return 0;
}