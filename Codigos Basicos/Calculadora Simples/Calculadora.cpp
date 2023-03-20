#include <iostream> // Biblioteca Padrao de entrada e saida de dados
#include <locale.h> // Biblioteca para adptacao para idioma selecionado
#include <stdlib.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");
  using namespace std;

  int Numero1 = 0, Numero2 = 0; // Definição de duas Variaveis de Tipo Inteiro, inicializadas em 0.
  int Opc = -1;                 // Definição de variavel para Controle do SwitchCase

  /* SwitchCase é um tipo de mecanismo de controle de seleção,
    onde nele podemos direcionar o usuario para diferentes caminhos,
    dependendo da informação recebida */
  while (Opc != 5) // Laço de Repetição While, que em tradução é Enquanto
  {
    cout << "Quer sair? (Digite 5 para sair) ou outro numero qualquer para continuar" << endl;
    cin >> Opc;
    if (Opc == 5)
      break;
    system("cls");
    cout << "Informe o primeiro numero: "; // Cout é o comando padrao de saida de dados
    cin >> Numero1;                        // Cin é o comando padrao de entrada de dados
    cout << "Informe o segundo numero: ";  // Cout é a maneira como mostramos alguma mensagem para o usuario
    cin >> Numero2;                        //  Cin é a forma como recebemos alguma informacao do usuario

    /* Sintaxe do cin, devemos informar o nome da variavel onde o dado sera armazenado.
     */

    /*
     String é uma cadeia de caracteres, Caracter é uma unica letra.
    */

    system("cls"); // Comando para que possamos limpar o console

    cout << "---------------------- " << endl;
    cout << "| [1]  Soma          | " << endl;
    cout << "| [2]  Multiplicação | " << endl;
    cout << "| [3]  Divisão       | " << endl;
    cout << "| [4]  Subtração     | " << endl;
    cout << "| Informe sua Opção:";
    cin >> Opc;

    switch (Opc) // Comando switch que é um  mecanismo de controle de seleção
    {
    case 1:
      cout << Numero1 << " + " << Numero2 << " = " << Numero1 + Numero2 << endl; // Mostrando variaveis ao usuario.
      /*
        Sintaxe para mostrar variveis, informe o nome da variavel fora das aspas.
      */
      system("pause"); // Comando para que possamos pausar o console
      system("cls");
      break;
    case 2:
      cout << Numero1 << " x " << Numero2 << " = " << Numero1 * Numero2 << endl;
      system("pause");
      system("cls");
      break;
    case 3:
      cout << Numero1 << " / " << Numero2 << " = " << Numero1 / Numero2 << endl;
      system("pause");
      system("cls");
      break;
    case 4:
      cout << Numero1 << " - " << Numero2 << " = " << Numero1 - Numero2 << endl;
      system("pause");
      system("cls");
      break;
    default:
      cout << "Opção Invalida";
      break;
    }
  }
  return 0;
}