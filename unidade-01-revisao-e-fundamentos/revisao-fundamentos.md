# Unidade Temática #1 - Revisão e Fundamentos


Senhores estudantes,

Sejam bem-vindos à disciplina de Estrutura de Dados, ministrada no curso superior de tecnologia em Sistemas para Internet do Ifac/Campus Rio Branco. Eu sou o professor Jonas Pontes e estarei convosco nesse componente curricular.



>> 📅 Sexta-feira, 29/8/2025 

## ▶️ Iniciar

Vamos iniciar fazendo um pequeno diagóstico. Para isso, acesse o juiz online [Beecrowd](https://judge.beecrowd.com) e complete o seu cadastro. Ato contínuo, acesse a disciplina Estrutura de Dados, de ID 015029 (a chave de acesso será dada pelo professor em sala de aula). Dentro da disciplina, acesse a lista de exercícios **051416	Diagóstico**. Faça essa lista. 

Procederemos com a revisão acompanada de discussão e correção dos desafios.

>> 📅 Quarta-feira, 3/9/2025 

Se necessário, proceda da seguinte forma:
> *Faça o download do GCC* — 🔗 [MinGW](https://sourceforge.net/projects/mingw/);

> *Instale o compilador e faça a configuração das variáveis do ambiente*;

```plaintext
1. Clique com o botão direito em "Este Computador" e vá em "Propriedades";
2. Clique em "Configurações Avançadas do Sistema";
3. Clique em "Variáveis de Ambiente".
4. Abra a variável Path e acrescente o caminho "C:\MinGW\bin" (ou o equivalente).
8. Clique em OK.
```

> *Faça o download do [Visual Studio Code](https://code.visualstudio.com/download) e instale-o*.

#### Você tem um ambiente de desenvolvimento configurado 

## 👩🏻‍💻 Primeiro programa em C


---
> *Crie um arquivo com a extensão .c com o nome hello_word e coloque este conteúdo:*
```c
#include <stdio.h>

int main(){
    printf("Hello world\n");
    return 0;
}
```
> Experimente mudar o conteúdo da mensagem

> Agora vamos estudar a anatomia desse programa em C, ou seja, o que cada parte representa.
---

## Estrutura Sequencial

### 1. Introdução à sintaxe C

**🎯 Objetivo:** 
  Apresentar a estrutura básica de um programa C e os conceitos fundamentais.

#### Estrutura Básica
- Declaração de funções;
- A função `main` como ponto de entrada;
- Saída formatada em C.


#### Variáveis e Tipos de Dados
- Tipos inteiros: `int`, e `char`;
- Modificadores de `int`: `short`, `long`,`signed` e `unsigned`;
- Tipos de ponto flutuante:   `float` e `double`;
- Modificador de `double`: `long`.
- 
- Tabela de tipos, tamanho do dado (em bits) e intervalo numérico (principais).

| Palavra     | Tipo      | Tamanho (bits) | Valor Mínimo                  | Valor Máximo              |
|-------------|----------------------------|-------------------------------|---------------------------|
| `char`      | Caractere | 8              | -128                          | 127                       |
| `int`       | Inteiro   | 16             | -32.768                       | 32.767                    |
| `long int`  | Inteiro   | 32             |-2.147.483.648                 | 2.147.483.647             |
| `float`     | Real com precisão simples  | 32             | 3,4 E-38     |  3,4E+38                  |
| `double`    | Real com precisão dupla    | 64             | 1,7 E-308    |  1,7E+308                 |
| `long double`    | Real com precisão dupla longa   | 80             | 3,4E-4932    |  3,4E+4932      |

>> De modo geral, o modificador `long` dobra a capacidade do tipo de dados e o modificador `unsigned` faz a variável ocupar somente valores positivos. Por exemplo, `unsigned int` armazena valores entre 0 e 65.535.

- Declaração e inicialização de variáveis.

#### Exemplo Prático
- Escrever um programa simples que declare variáveis de diferentes tipos.

### 2. Entrada e saída em Java

**🎯 Objetivo:**
Ensinar como interagir com o usuário, receber dados e exibir informações.

A entrada e a saída de dados em C é feita por meio das funções scanf e e printf, respectivamente. Essas funções pertencem à biblioteca stdio.h.

As funções para entradas e saídas precisam de um código que indica o tipo de dado a ser lido ou apresentado. 

**Códigos utilizados:**

| Código | Significado |
------------------------
%c | Leitura e escrita de caractere 
%d | Leitura e escrita de inteiro em formato decimal
%i | Leitura e escrita de inteiro
%e | Leitura e escrita de número em notação científica (com `e` minúsculo)
%E | Leitura e escrita de número em notação científica (com `E` maiúsculo)
%f | Leitura e escrita de número de ponto flutuante com precisão simples
%lf| Leitura e escrita de número de ponto flutuante com precisão dupla
%o | Leitura e escrita de número em notação octal
%s | Leitura e escrita de string
%x | Leitura e escrita de número hexadecimal com letras minúsculas
%X | Leitura e escrita de número hexadecimal com letras maiúsculas
%% | Exibe um sinal de % (exclusivo para printf)
%p | Exibe um ponteiro (exclusivo para printf)


### 3. Operadores Aritméticos

**🎯 Objetivo:**  
Apresentar os operadores aritméticos básicos da linguagem C e como utilizá-los em expressões matemáticas.

#### Operadores Disponíveis

| Operador | Descrição        | Exemplo      | Resultado |
|----------|------------------|----------------------|-----------|
| `+`      | Adição            | `5 + 3`              | `8`       |
| `-`      | Subtração         | `5 - 3`              | `2`       |
| `*`      | Multiplicação     | `5 * 3`              | `15`      |
| `/`      | Divisão           | `6 / 3`              | `2`       |
| `%`      | Módulo (resto)    | `5 % 2`              | `1`       |

> ⚠️ A divisão entre inteiros retorna apenas a parte inteira do resultado.

---

#### Exemplos Práticos  
- Criar um programa que solicita dois números ao usuário, realiza a soma e exibe o resultado.

- Criar um programa que calcula e mostre o resultado das quatro operações básicas entre duas variáveis declaradas e inicializadas com valores lidos do teclado.

- Escreva um programa que solicita um número inteiro e mostra:

  - O dobro desse número.

  - A metade (utilizando divisão inteira).

  - O quadrado do número.

- Modifique o programa para que ele aceite números double e observe as diferenças nos resultados das divisões.

---

### 4. Casting de Dados

#### O que é Casting?
Casting ou conversão de tipo é o processo de transformar um tipo de dado em outro. Essa conversão pode ser:

> **Implícita (automática):** Quando não há perda de dados.

> **Explícita (manual):** Quando há possibilidade de perda de dados ou quando se converte de um tipo maior para um tipo menor.

#### Exemplos de Conversão implícita
```c
int numeroInteiro = 10;
float numeroDecimal = numeroInteiro; // Conversão implícita de int para double
printf("%.1f"numeroDecimal); // Saída: 10.0
```
Casting implícitos são automáticos, sem a necessidade do programador fazê-lo, como no exemplo acima. 


#### Conversão Explícita (Casting Manual)

> Escrever um programa que leia quatro números inteiros, calcule e mostra a média entre eles, sem casting explícito.

> Adicionar casting explícito. 

> Tente atribuir um *float* a uma variável inteira sem casting explícito. Isso resultará em erro.

> Observe o exemplo a seguir:

```c
float valorDecimal = 9.7;
int valorInteiro = (int) valorDecimal; // Casting explícito
printf("%d", valorInteiro); // Saída: 9 (parte decimal é descartada)
```
Em casting explícito, um valor não é arredondado; ele é "truncado".

> ⚠️ *Atenção:* Ao converter de double para int, a parte fracionária é perdida!