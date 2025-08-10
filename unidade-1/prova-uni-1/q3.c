#include<stdio.h>
#include<math.h>
int main() {
	float num;
	int escolha;
	printf("Digite um número");
	scanf("%f", &num);
	printf("O que deseja calcular?\n");
	printf("101-Quadrado do numero\n");
	printf("102-Dobro do numero\n");
	printf("103- 40%% do numero\n");
	printf("Digite o código correspondente\n");
	scanf("%d", &escolha);
	switch(escolha){
		case 101:
			printf("Quadrado: %f", num*num);
			break;
		case 102:
			printf("Dobro: %f", num*2);
			break;
		case 103:
			printf("40%: %f", num*0.4);
			//printf("40%%: %f", num*0.4); correção
			break;
		default:
			printf("Código digitado não consta na tabela!");
			break;
	}	
	return 0;
}