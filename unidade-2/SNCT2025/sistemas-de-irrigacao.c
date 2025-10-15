#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//itens a considerar na cultura
//para não fincar tão vago, seria interessante especificar a cultura;
//características das culturas da propriedade: sorgo por exemplo; quant água varia de acordo com o desenvolvimento
//tipo de irrigação: mangueiras, aspersão...
//clima da região de irece: tempo de chuva/seca`

//a definir
//unidades de medida
//tamanho da propriedade
//custo num espaço determinado



int main(){
    SetConsoleOutputCP(CP_UTF8);
    float tamanhoProp;
    float consumoTotal, custoTrad;
    int escolhaTipoSistema;

    printf("Simulação:\n");
    printf("Comparação do consumo de água entre um sistema tradicional e um sistema inteligente na irrigação da cultura do sorgo.\n");
    //dados para calculo do volume de água utilizado, sabendo a demanda hídrica da cultura
    printf("Sistema tradicional utilizando aspersão: \ncusto de implementação estipulado: R$: 5,00 por metro quadrado\nconsumo de água estipulado: 15L por metro quadrado.\neficiência de 75%%\n");
	printf("\n");
    printf("Sistema inteligente : \ncusto de implementação estipulado: R$: 7,00 por metro quadrado\nconsumo de água estipulado: 7,5L por metro quadrado.\neficiência de 90%%\n");
	printf("\n");
    printf("Determine a área da sua propriedade em metros quadrados:");
    scanf("%f", &tamanhoProp);
    printf("Qual sistema você aplicaria?");
	printf("Sistema tradicional....1 \nSistema inteligente....2\n");
	scanf("%f", &escolhaTipoSistema);
    if(escolhaTipoSistema==1){
		consumoTotal=15*tamanhoProp;
		printf("A quantidade total de L/m^2 é: %.2f\n", consumoTotal);
        
		custoTrad=10*tamanhoProp;
		printf("O valor da implementação é R$ %.2f \n", custoTrad);
	}




}