#include<stdio.h>
#include<string.h>
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