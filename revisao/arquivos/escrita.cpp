#include<stdio.h>
#include<string.h>
#define NOMEARQ "aaa.txt"
#define NUM 3

struct Usuario{
	char nome[50];
	int id;
	int idade;
};

void cadastro(char nome[], int id, int idade);

int main(){
	struct U user[NUM];
	printf("Digite pos");
	int pos;
	scanf("%d", &pos);
	cadastro(user[pos].nome, user[pos].id, user[pos].idade);
	
}

void escrita(){
	FILE *arquivo;
	char nome[30];
	int i;
	arquivo=fopen(NOMEARQ, "w");
	if(arquivo==NULL){
		printf("ERRO\n");
		return 0;
	}
	printf("Nome:");
	fgets(nome, 30, stdin);
	for(i=0; i<30;i++){
		fputc(nome[i], arquivo);
	}
	fclose(arquivo);
	return 0;
}