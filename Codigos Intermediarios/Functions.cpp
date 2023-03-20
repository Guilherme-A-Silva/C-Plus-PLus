/* AQUI FOI FEITO VARIAS FUNÇÕES SECUNDARIAS PARA OPÇÕES DO MENU QUE ESTÁ NA FUNÇÃO PRINCIPAL */

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int V[100],L;

int preencher(int a){
	int i;
	for(i=0;i<L;i++){
		printf("Insira o %d° valor: ", i+1);
		scanf("%d", &V[i]);
		}
		a = V[100];
		return a;
	}

int exibir(int s){
	int i;
	for(i=0;i<L;i++){
		printf("%dº valor é: %d \n", i+1,V[i]);
		}
		s = V[100];
		return s;
	}

int ordenar(int o){
	int i, j, maior;
	for(i=0; i<L; i++){
		for(j=i+1; j<L; j++){
			if (V[i]>V[j]){
				maior = V[i];
				V[i] = V[j];
				V[j] = maior;
			}
		}
	}
	for(i=0;i<L;i++){
		printf("%dº valor é: %d\n", i+1, V[i]);
	}
	o = V[100];
	return o;
}

int buscar(int b){
	int i, x;
	bool test;
	
	printf("Infome o valor a ser procurado: ");
	scanf("%d", &x);
		for(i=0; i<L; i++){
			if (V[i] == x)
				test = true; 
       }
	if (test == true)
		printf("O Valor %d esta presente no vetor \n", x);
	else 
		printf("Valor não encontrado!\n");
	
	b = V[100];
	return b;
}

int main()
{	
	int f;
	setlocale(LC_ALL, "Portuguese");
    printf("Informe a quantidade maxima de valores: ");
    scanf("%d", &L);
	do
	{
	printf("_____________\n\nMENU DE OPERAÇÕES COM VETORES [%d] \n_____________\n\n[1] PREENCHER UM VETOR DE INTEIROS.\n[2] EXIBIR UM VETOR DE INTEIROS.\n[3] ORDENAR UM VETOR DE INTEIROS.\n[4] LOCALIZAR UM DADO VALOR EM UM VETOR.\n[5] SAIR DO PROGRAMA.\n______________\n\nESCOLHA UMA OPÇÃO: ", L);
	scanf("%d", &f);
		
	switch(f)
	{
	case 1:
		preencher(V[100]);
		break;
	case 2:
		exibir(V[100]);
		break;
	case 3:
		ordenar(V[100]);
		break;
	case 4:
		buscar(V[100]);
		break;
	case 5:
		printf("Programa finalizado");
		break;
	default:
		printf("\n| E         | >>E<< | E          |  \n");
		printf("\n|   R       | >>R<< |   R        |  \n");
		printf("\n|     R     | >>R<< |     R      |  \n");
		printf("\n|       O   | >>O<< |       O    |  \n");
		printf("\n|         R | >>R<< |         R  |  \n");
		break;
	}
	
	}	
	while (f!=5);

	return 0;
}