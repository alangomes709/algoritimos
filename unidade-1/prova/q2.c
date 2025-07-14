#include<stdio.h>
int main() {
	float imc, peso, alt;
	printf("Digite peso");
	scanf("%f", &peso);
	printf("Digite altura");
	scanf("%f", &alt);
	imc=peso/(alt*alt);
	printf("imc %f", imc);
	if(imc<18.5){
		printf("Abaixo do peso normal");
	}else if(imc>=18.5 || imc<=24.9){
		printf("Peso normal");
	}
	else if(imc>=25 || imc<=29.9){
		printf("Excesso de peso");
	}
	else if(imc>=30 || imc<=34.9){
		printf("Obesidade classe 1");
	}
	else if(imc>=35 || imc<=39.9){
		printf("Obesidade classe 2");
	}else if(imc>=40){
		printf("Obesidade classe 3");
	}
	return 0;
}