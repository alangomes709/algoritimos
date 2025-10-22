#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
	char resp;
	SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));
	do{

        
        float tamanhoProp, quantPlantas;
        int escolhaTipoSistema=0;
        float custoTrad,  consumoAguaTrad, manutencaoTrad=0;
        float custoInteligente, consumoAguaInteligente, manutencaoInteligente=0;
        int umidade, umidadeMin = 1, umidadeMax = 40;
        int i, j, precisaMolhar=0, naoMolha=0;

        printf("SIMULAÇÃO:\n");
        printf("Comparação do consumo de água entre um sistema tradicional e um sistema inteligente na irrigação.\n");
        printf("\n");
        printf("Sistema tradicional utilizando aspersão: \nCusto de implementação estipulado: R$: 5,00 por metro quadrado\nConsumo de água estipulado: 5L por planta irrigada.\n");
        printf("\n");
        printf("Sistema inteligente: \nCusto de implementação estipulado: R$: 7,00 por metro quadrado\nConsumo de água estipulado: 5L por planta irrigada.\n");
        printf("\n");
        printf("Determine a área da sua propriedade em metros quadrados:");
        scanf("%f", &tamanhoProp);
        printf("Qual sistema você aplicaria?\n");
        printf("Digite o número correspondente:\n");
        printf("Sistema tradicional....1 \nSistema inteligente....2\n");
        scanf("%d", &escolhaTipoSistema);
        
        if(escolhaTipoSistema==1){
            precisaMolhar=0;
            quantPlantas=tamanhoProp;
            //calculo consumo de agua em 15 dias molhando uma vez ao dia
            for (i=1; i<=15; i++)
            {
                for(j=0; j<=quantPlantas; j++)
                {
                    precisaMolhar++;
                }
                //5 == consumo de agua (L) por planta
                consumoAguaTrad=5*precisaMolhar;
            }
            printf("A quantidade de água consumida em quinze dias é de: %.1f L\n", consumoAguaTrad);
            custoTrad=tamanhoProp*5;
            printf("O custo financeiro da implementação de um sistema tradicional é R$ %.2f. \n", custoTrad);
            for(i=0; i<6;i++){
                //manutenção trad = 4
                manutencaoTrad=4*tamanhoProp;
            }
            printf("O custo financeiro da manutenção de um sistema tradicional em três anos, em revisões semestrais é R$ %.2f. \n", manutencaoTrad);
            
        }else if(escolhaTipoSistema==2){
            precisaMolhar=0, naoMolha=0;
            printf("No caso do sistema inteligente aplicado, há sensores de umidade e temperatura em cada planta e verifica se precisa ou não ser regada.\n");
            printf("Caso o nível de umidade da área seja adequado, o consumo de água será menor.\n");
            quantPlantas=tamanhoProp;
            //calculo consumo de agua em 15 dias molhando uma vez ao dia
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
            printf("O custo financeiro da implementação de um sistema inteligente é R$ %.2f. \n", custoInteligente);
            for(i=0; i<6;i++){
                //manutenção inteligente = 3
                manutencaoInteligente=3*tamanhoProp;
            }
            printf("O custo financeiro da manutenção de um sistema inteligente em três anos, em revisões semestrais é R$ %.2f. \n", manutencaoInteligente);
            
        } else {
            printf("Opção inválida. Por favor, escolha 1 ou 2.\n");
        }
        printf("Gostaria de continuar a simulação?\n");
        printf("Digite 's' para continuar ou qualquer letra para sair: ");
        scanf("%s", &resp);
        
        printf("\n");
        printf("\n");
        printf("\n");
        
	}while (resp == 's' || resp == 'S');
	
	return 0;
}