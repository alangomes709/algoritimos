#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// #include<windows.h>

int main(){
	// int b=1;
	// SetConsoleOutputCP(CP_UTF8);
	// do{

	srand(time(NULL));
	
	float tamanhoProp, quantPlantas;
    float custoTrad,  consumoAguaTrad;
	int escolhaTipoSistema;
    float custoInteligente, consumoAguaInteligente;
	int umidade, umidadeMin = 1, umidadeMax = 40;
	int i, j, precisaMolhar=0, naoMolha=0;

    printf("Simulação:\n");
    printf("Comparação do consumo de água entre um sistema tradicional e um sistema inteligente na irrigação.\n");
	printf("\n");
    //leitura de dados para calculo do volume total de água utilizado, sabendo a demanda hídrica da cultura
    printf("Sistema tradicional utilizando aspersão: \nCusto de implementação estipulado: R$: 5,00 por metro quadrado\nConsumo de água estipulado: 5L por planta.\n");
	printf("\n");
    printf("Sistema inteligente: \nCusto de implementação estipulado: R$: 7,00 por metro quadrado\nConsumo de água estipulado: 5L por planta.\n");
	printf("\n");
    printf("Determine a área da sua propriedade em metros quadrados:");
    scanf("%f", &tamanhoProp);
    printf("Qual sistema você aplicaria?\n");
	printf("Sistema tradicional....1 \nSistema inteligente....2\n");
	scanf("%d", &escolhaTipoSistema);
	
	if(escolhaTipoSistema==1){
		quantPlantas=tamanhoProp;
		//calculo consumo de agua
		for (i=1; i<=15; i++)
		{
			for(j=0; j<=quantPlantas; j++)
			{
				precisaMolhar++;
			}
			//i == numero de dias molhado
			consumoAguaTrad=5*precisaMolhar;
		}
		printf("A quantidade de água consumida em quinze dias é de: %.1f L\n", consumoAguaTrad);
		custoTrad=tamanhoProp*5;
		printf("O custoFinanceiro da implementação de um sistema tradicional é R$ %.2f. \n", custoTrad);
	}
	if(escolhaTipoSistema==2){
        printf("No caso do sistema inteligente aplicado, há sensores de umidade e temperatura em cada planta e verifica se precisa ou não ser regada.\n");
        printf("Caso o nível de umidade da área seja adequado, o consumo de água será menor.\n");
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
		custoInteligente=tamanhoProp*7;
		printf("O custoFinanceiro da implementação de um sistema tradicional é R$ %.2f. \n", custoInteligente);
		
	}
	// }while (b==1);
	
	return 0;
}