# Linguagem de programação C++

C++ é uma linguagem de programação compilada multi-paradigma e de uso geral. Desde os anos 1990 é uma das linguagens comerciais mais populares, sendo bastante usada também na academia por seu grande desempenho e base de utilizadores.

![cpppp-490x490](https://user-images.githubusercontent.com/68473916/226377284-8a396c08-dd97-4152-9bfb-f746f0cc72a6.png)


# Sintaxe Basica para o C++

A sintaxe são regras detalhadas para cada construção válida na linguagem C.
Estas regras estão relacionadas com os tipos, as declarações, as funções e as
expressões. <br>

Os tipos definem as propriedades dos dados manipulados em um programa. <br>
As declarações expressam as partes do programa, podendo dar significado a
um identificador, alocar memória, definir conteúdo inicial, definir funções.<br>
As funções especificam as ações que um programa executa quando roda.<br>
A determinação e alteração de valores, e a chamada de funções de I/O são
definidas nas expressões.<br>

As funções são as entidades operacionais básicas dos programas em C, que
por sua vez são a união de uma ou mais funções executando cada qual o seu trabalho.
Há funções básicas que estão definidas na biblioteca C. As funções printf() e scanf()
por exemplo, permitem respectivamente escrever na tela e ler os dados a partir do
teclado. O programador também pode definir novas funções em seus programas, como
rotinas para cálculos, impressão, etc.<br>

Todo programa C inicia sua execução chamando a função main(), sendo
obrigatória a sua declaração no programa principal.<br>

Comentários no programa são colocados entre /* e */ não sendo considerados
na compilação.<br>

Cada instrução encerra com ; (ponto e vírgula) que faz parte do comando.<br>

```c++
{
ㅤmain() /* função obrigatória */
ㅤ{
ㅤㅤprintf("oi");
ㅤ}
}
```

# Identificadores

São nomes usados para se fazer referência a variáveis, funções, rótulos e
vários outros objetos definidos pelo usuário. O primeiro caracter deve ser uma letra ou
um sublinhado. Os 32 primeiros caracteres de um identificador são significativos. É
case sensitive, ou seja, as letras maiúsculas diferem das minúsculas.<br>

int x; /*é diferente de int X;*/<br>

# Tipos

Quando você declara um identificador dá a ele um tipo. Os tipos principais
podem ser colocados dentro da classe do tipo de objeto de dado. Um tipo de objeto de
dados determina como valores de dados são representados, que valores pode
expressar, e que tipo de operações você pode executar com estes valores. <br>

ex:

```c++
{
ㅤint main() /* função obrigatória */
ㅤ{
ㅤㅤprintf("oi");
ㅤㅤreturn 0;
ㅤㅤint Inteiro;
ㅤㅤfloat Real;
ㅤㅤchar Caractere;
ㅤ}
}
```

# Operadores

# Operador de atribuição

O operador de atribuição em C é o sinal de igual "=". Ao contrário de outras
linguagens, o operador de atribuição pode ser utilizado em expressões que também
envolvem outros operadores.<br>

#Aritméticos

Os operadores *, /, + e - funcionam como na maioria das linguagens, o operador
% indica o resto de uma divisão inteira.<br>

i+=2; -> i=i+2;
x*=y+1; -> x=x*(y+1);
d-=3; -> d=d-3;

Ex:
```c++
{
ㅤㅤmain()
ㅤㅤ{
ㅤㅤㅤㅤint x,y; x=10; y=3;
ㅤㅤㅤㅤprintf("%d\n",x/y);
ㅤㅤㅤㅤprintf("%d\n",x%y);
ㅤㅤ}
}
```

#Operadores de relação e lógicos

ㅤㅤRelação refere-se as relações que os valores podem ter um com o outro e
lógico se refere às maneiras como essas relações podem ser conectadas. Verdadeiro
é qualquer valor que não seja 0, enquanto que 0 é falso. As expressões que usam
operadores de relação e lógicos retornarão 0 para falso e 1 para verdadeiro.<br>
ㅤTanto os operadores de relação como os lógicos tem a precedência menor que os
operadores aritméticos. As operações de avaliação produzem um resultado 0 ou 1.

![image](https://user-images.githubusercontent.com/68473916/226375662-c89778b1-89ee-483f-a7d3-da4827beaa48.png)

Ex:
```c++
{
ㅤㅤmain()
ㅤㅤ{
ㅤㅤㅤㅤint i,j;
ㅤㅤㅤㅤprintf("digite dois números: ");
ㅤㅤㅤㅤscanf("%d%d",&i,&j);
ㅤㅤㅤㅤprintf("%d == %d é %d\n",i,j,i==j);
ㅤㅤㅤㅤprintf("%d != %d é %d\n",i,j,i!=j);
ㅤㅤㅤㅤprintf("%d <= %d é %d\n",i,j,i<=j);
ㅤㅤㅤㅤprintf("%d >= %d é %d\n",i,j,i>=j);
ㅤㅤㅤㅤprintf("%d < %d é %d\n",i,j,i< j);
ㅤㅤㅤㅤprintf("%d > %d é %d\n",i,j,i> j);
ㅤㅤ}
}
```
Ex:

```c++
{
ㅤㅤmain()
ㅤㅤ{
ㅤㅤㅤㅤint x=2,y=3,produto;
ㅤㅤㅤㅤif ((produto=x*y)>0) printf("é maior");
ㅤㅤ}
}
```
