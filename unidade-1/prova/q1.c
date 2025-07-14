#include<stdio.h>
int main() {
	int hora;
	printf("Dia ou noite? Digite a hora:");
	scanf("%d", &hora);
	
	if(hora<0 || hora>23){
		printf("Numero invalido");
	}else if(hora>=6 && hora<18){
		printf("Dia");
	}else if(hora>=18 && hora<=23 || hora>=1){
	//}else if(hora>=18 && hora<=23 || hora>=0){ daria certo assim :<
		printf("Noite");
	}
	return 0;
}