#include <stdio.h>
#include <locale.h>

int V[100],L, busca, G;

int binario(int V[], int key, int left, int right){
	int meio;
	if(right<left){
		return -1;
	}
	
	meio = (left + right) / 2;
	if (V[meio] == key){
		return meio;
	} else if (key < V[meio]){
		return binario(V, key, left, meio-1);
	} else{
		return binario(V, key, meio+1, right);
	}
}

int main(){
	int i, j, menor;
	printf("Infome a quantidade de valores: ");
	scanf("%d", &L);
	
	for(i=0;i<L;i++){
		printf("Insira o %d° valor: ", i+1);
		scanf("%d", &V[i]);
	}
	for(i=0;i<L;i++){
		for(j=i+1;j<L;j++){
			if(V[i]>V[j]){
				menor = V[i];
				V[i] = V[j];
				V[j] = menor;
			}
		}
	}
	printf("========================= \n");
	printf("Vetor em Ordem Crescente! \n");
	printf("========================= \n");
	for(i=0;i<L;i++){
		printf("%d° valor do Vetor: %d \n", i+1, V[i]);
	}
	printf("Digite um valor para ser buscado: ");
	scanf("%d", &G);
	
	busca = binario(V, G, 0, L-1);
	if(busca < 0){
		printf("Valor não encontrado! \n");
	}else{
		printf("Encontrou o valor na posição %d \n", busca+1);
	}
}