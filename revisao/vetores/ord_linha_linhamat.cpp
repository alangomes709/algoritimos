#include<stdio.h>
int main(){
	int mat[3][5]={{4,5,2,3,7}, {1,3,6,8,9}, {5,2,8,9,0}};
	int k, i, j, aux;
	
	for(k=0;k<3;k++){
		
		for(i=0;i<5;i++){
			
			for(j=i;j<5;j++){
				
				if(mat[k][i]>mat[k][j]){
					aux=mat[k][i];
					mat[k][i]=mat[k][j];
					mat[k][j]=aux;
				}
			}
		}	
	}
	
	for(k=0;k<3;k++){
		
		for(i=0;i<5;i++){
			
			printf("%d", mat[k][i]);
		}	
		printf("\n");
	}
	
}