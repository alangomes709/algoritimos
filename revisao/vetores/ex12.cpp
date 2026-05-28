#include<stdio.h>
int main(){
	int mat[4][4]={{1,2,4,4}, {5,6,7,8}, {9,0,1,2}, {22,4,5,7}};
	int i, j, cont=0, esc;
	scanf("%d", &esc);
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(esc==mat[i][j]){
				cont++;
			}
		}
	}
	printf("qnt vezes q %d ocorreu é: %d", esc, cont);
	
}