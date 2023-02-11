#include <stdio.h>

int main(){
	
	int mat[100][100], linha, coluna, linhamatriz1,colunamatriz1, mat2[100][100], linhamatriz2,colunamatriz2, mat3[100][100],x,aux;
	
	printf("------------- MATRIZ 1 ------------------ \n");
	printf("\n");
	printf("Informe a quantidade de linhas da primeira matriz: ");
	scanf("%d", &linhamatriz1);
	printf("informe a quantidade de colunas da primeira matriz: ");
	scanf("%d", &colunamatriz1);
	printf("\n ---------------- Dimensoes da primeira matriz => SALVA ------------------ \n");
	printf("\n ---------------- MATRIZ 2 ----------------- \n");
	printf("\n");
	printf("informe  a quantidade de linhas da  segunda matriz: ");
	scanf("%d", &linhamatriz2);
	printf("informe a quantidade de colunas da segunda matriz: ");
	scanf("%d", &colunamatriz2);
	printf("\n ---------------- Dimensoes da segunda matriz => SALVA ----------------- \n");

		if(colunamatriz1!=linhamatriz2){
		printf("Multiplicação indefinida");
		}
	    else{
			printf("\n ------- PREENCHIMENTO DA PRIMEIRA MATRIZ ------- \n");
			for(linha=0; linha<linhamatriz1;linha++){
				for(coluna=0; coluna<colunamatriz1;coluna++){
					printf("informe o valor da primeira matriz de posicao [%d][%d] : ", linha+1, coluna+1);
					scanf("%d", &mat[linha][coluna]);
				}
			}
	printf("\n -------- PREENCHIMENTO DA SEGUNDA MATRIZ --------- \n");
		for(linha=0;linha<linhamatriz2;linha++){
	   		for(coluna=0;coluna<colunamatriz2;coluna++){
	   			printf("informe o valor da segunda matriz de posicao [%d][%d]: ", linha+1, coluna+1);
	   			scanf("%d", &mat2[linha][coluna]);
	   			}	
			}
		/* FAZENDO O PASSO DA MULTIPLICACAO ENTRE AS DUAS MATRIZES INFORMADAS */ 
		
			for(linha = 0; linha < linhamatriz1; linha++) 
				for(coluna = 0; coluna < colunamatriz2; coluna++) {
					aux=0;
						for(x = 0; x < linhamatriz2; x++){
						aux += mat[linha][x]*mat2[x][coluna];
							}
							mat3[linha][coluna] = aux;			
						}
       /* MULTIPLICACAO FEITA E EM SEGUIDA PRINTAREMOS... */
       
	printf("=====MATRIZ DE DIMENSOES [%d]x[%d]===== \n", linhamatriz2, linhamatriz2);
	printf("\n");
		for(linha=0; linha<linhamatriz1;linha++){
			printf("|");
				for(coluna=0; coluna<colunamatriz2;coluna++){
					printf(" %6d ",mat3[linha][coluna]);
				}	
					printf("| \n");
			}
		} 
	}