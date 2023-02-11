/*  Preenchimento simples de uma estrutura  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>

int main(void)
{
	bool test;
    int perg;
	setlocale(LC_ALL,"Portuguese");
	
  struct ficha_de_func
  {
    char nome[30];
    char ender[40];
    char cargo[20];
    char cpf[20];
    int nFilhos;
    float salario;
  };
  
  struct ficha_de_func func;
  printf("\n---------- Cadastro de Funcionario -----------\n\n\n");
  
  printf("Nome ......: ");
  fgets(func.nome, 30, stdin);
  
  printf("Digite seu CPF ......: ");
  fgets(func.cpf, 20, stdin);
  
  printf("Informe seu Cargo ..: "); 
  fgets(func.cargo, 20, stdin);
  
  printf("Informe seu Endereço ..: "); 
  fgets(func.ender, 40, stdin);
  
  printf("Tem filhos ? | Digite 1 para sim ou 2 para não | ..:  ");
  scanf("%d", &perg);
  
  if(perg == 1)
  	test = true;
  	if(test == true){
  	printf("Quantos filhos ..: ");
    scanf("%d", &func.nFilhos);}
  else
  	printf("Sensato demais, congrats!!!\n ");
  printf("Informe seu Salario Mensal ..: ");
  scanf("%f", &func.salario);
  
   printf("\n\n --------- Lendo os dados da struct ---------\n\n");
   printf("...... Nome .....: %s", func.nome);
   printf("...... CPF ......: %s", func.cpf);
   printf("...... Cargo ....: %s", func.cargo);
   printf("..... Endereço ..: %s", func.ender);
   printf("......Salario....: R$ %0.2f \n", func.salario);
   if(test == true)
   	printf("... Quantidade de filhos ...: %d \n", func.nFilhos);
   else
   	printf(".Não tem filhos! .\n");
   
  return 0;
}