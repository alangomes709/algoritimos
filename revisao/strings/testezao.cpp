#include<stdio.h>
#include<string.h>
int main(){
	char algo[40];
	char msa[100]="hamburguer 3d";
	char msaB[100]="piazza 3d";
	char tablet[40];
	char tabletB[40];
	fgets(algo, 50, stdin);
	printf("%s", algo);
	int tam=strlen(algo);
	printf("%d", tam);
	printf("\n");
	//assim ele pega o "\n"
	strcat(msa, algo);
	printf("%s\n", msa);
	strncat(msaB, algo, 3);
	printf("%s\n", msaB);
		
	
	strcpy(tablet, algo);
	printf("%s\n", tablet);
	strncpy(tabletB, algo, 8);
	printf("%s\n", tabletB);
	
	int comparation=0;
	comparation = strcmp(msaB, algo);
	printf("%d\n", comparation);
	int comparationA=0;
	comparationA = strncmp(msaB, algo, 4);
	printf("%d\n", comparationA);
	return 0;
}