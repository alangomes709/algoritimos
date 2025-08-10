#include<stdio.h>
int main() {
	char nome[100], sind;
	float valor;
	int escolha;
	printf("Digite seu nome\n");
	scanf(" %s", &nome);
	printf("Qual especialista deseja consultar?\n");
	printf("001-Psicologo\n");
	printf("002-Médico especialista\n");
	printf("003-Ortopedista\n");
	printf("004-Nutricionista\n");
	scanf("%d", &escolha);
	printf("Sindicalizado?\n S-sim e N-não\n");
	scanf(" %c", &sind);
	switch(escolha) {
		case 001:
			if(sind=='S') {
				printf("Nome: %s Valor da consulta: %f", nome, valor=((150*0.3)-150)*(-1));
			}else if(sind=='N'){
				printf("Nome: %s Valor da consulta: %f", nome, valor=150);
			}else if(sind!=0||sind!=1)
			{
				printf("Sinddica invalido");
			}
			break;
		case 002:
			if(sind=='S') {
				printf("Nome: %s Valor da consulta: %f", nome, valor=((125*0.2)-125)*(-1));
			}else if(sind=='N'){
				printf("Nome: %s Valor da consulta: %f", nome, valor=125);
			}else if(sind!=0||sind!=1)
			{
				printf("Sinddica invalido");
			}
			break;
		case 003:
			if(sind=='S') {
				printf("Nome: %s Valor da consulta: %f", nome, valor=((200*0.1)-200)*(-1));
			}else if(sind=='N'){
				printf("Nome: %s Valor da consulta: %f", nome, valor=200);
			}else if(sind!=0||sind!=1)
			{
				printf("Sinddica invalido");
			}
			break;
		case 004:
			if(sind=='S') {
				printf("Nome: %s Valor da consulta: %f", nome, valor=((150*0.25)-150)*(-1));
			}else if(sind=='N'){
				printf("Nome: %s Valor da consulta: %f", nome, valor=150);
			}else if(sind!=0||sind!=1)
			{
				printf("Sinddica invalido");
			}
			break;
			
		default:
			printf("Código do especialista inválido");
			break;
	}
	
	return 0;
}