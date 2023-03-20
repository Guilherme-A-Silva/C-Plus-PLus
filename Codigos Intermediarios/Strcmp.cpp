#include <stdio.h>
#include <string.h>
int main()
{
	// Aloquei 30 espaços na memoria para digitar na variavel choice de tipo char.
	char choice[30];
	// bool é um tipo de variavel de teste.
	bool verification;
	
	printf(" | If anyone make you fell not good | \n |  Enough. Take a flower + hug me  | \n ");
	
	printf("Make your choice: Type Continue to continue or Type Exit to exit: ");
	scanf("%s", &choice);

	// Fazendo a comparação entre a resposta guardada na variavel choice de tipo string ou seja char e a palavra "Continue".
			
	if(strcmp(choice, "Continue")==0){
		verification = true;
		printf("Working right now \n");
	}
    // Se o teste acima for validado, o programa guardara na variavel de tipo bool o teste como "true", ou seja verdade.
	else{
	        verification = false;
	        printf("Exiting right now \n");
	}
	// Se não ele guardará falso.
	
	if(verification == true){
		printf("Verdade");
	}
	else
	printf("Falso");
	
	// Aqui em cima, eu apenos testo se ele guardou corretamente e printo na tela o teste.
	
	//O comando para efetuação de comparação entre strings é "strcmp(Variavel digitada, palavra esperada)
	
	//Ex: printf("Digite a senha");
	//       scanf("%s", &senha);
	//     if(strcmp(senha, "Mamonas")==0)
	// Acima eu fiz a comparação de uma senha digitada e comparei com a palavra mamonas, se fossem iguais. Ela seris verdadeira, pois coloquei o "== 0"
}