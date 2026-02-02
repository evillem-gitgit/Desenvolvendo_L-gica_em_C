#include <stdio.h>//biblioteca padrao de entrada e saida

#include <stdlib.h>
//system("pause"); so da pra usar com essa biblioteca ai acima


int main() {


    int idade = 18;
    float altura = 1.55;
    double peso = 55.5;//armazena numeros com mais precisao e maiores casas decimais
    char letra = 'A';//armazena apenas um caractere

    char nome[5] = "Maria";
//No exemplo acima, nome pode armazenar até 19 caracteres mais o caractere nulo.
//A manipulação de strings requer cuidado para evitar buffer
// overflows (escrever além dos limites do array). 



/////////////////////////////////////////////////////////////////////////////////////////////////////
//ENTRADA E SAIDA EM C//

// Leitura de dados em arquivos

// > fscanf
// > fgets

// Escrita de dados em arquivos

// > fprintf
// > fputs

////////////////////////////////////////////////////////////////////////////////////////////////////






/*

Lendo Strings com Espaços: fgets

 ✅ Use fgets(nome, sizeof(nome), stdin) SEMPRE que possível.
Ler nomes completos, frases, textos com espaços
➡️NESSE FORMATO AQUI:(nome, sizeof(nome), stdin)


👉Para ler strings com espaços em branco,
 a função fgets é a melhor opção.

 
👉Ela lê uma linha inteira da entrada, incluindo espaços,
até encontrar um caractere (\n)
ou atingir o tamanho máximo especificado.



Exemplo de uso de fgets:😊

char nome[50];
 
printf("Digite seu nome completo: ");
 
➡️ fgets(nome, 50, stdin); 

➡️ Você está dizendo:                                             
➡️ coloque no array nome até 49 caracteres da entrada padrão (o teclado ➡️ stdin).
 

fgets recebe três argumentos:
1.O array onde a string será armazenada.
2.O tamanho máximo da string (incluindo o \n e o \0).
3.O fluxo de entrada (geralmente stdin para a entrada padrão do teclado).
 



❗❗❗❗❗❗❗❗❗❗
função que lê dados:
stdin → lê do teclado

stdout → saída padrão (normalmente a tela)

stderr → saída de erros
❗❗❗❗❗❗❗❗❗❗
Nome	     Tipo	      Usado para	      Explicação


stdin	     ENTRADA	  Ler dados	          Normalmente o teclado

stdout	     SAÍDA	      Mostrar dados	      Normalmente a tela

stderr	     SAÍDA	      Mostrar erros	      Também vai para a tela, mas separado do stdout
❗❗❗❗❗❗❗❗❗❗


✅ No printf você NUNCA deve usar & antes da variável.

✅ VOCÊ usa & no scanf sempre que a variável NÃO for um array.
EX: int idade;



  ➡️scanf("%d", &idade);
    printf("Sua idade: %d", idade);


*/




    int quantidade;



    printf("Sua idade é: %d anos\n", idade);

    scanf("%d", &quantidade);

    printf("Quantidade: %d\n", quantidade);
    printf("Hello, World!\n");
    system("pause");
    return 0;
}

//ATENÇÃO: essa poha aqui >  %d  <
//printf("Sua idade é: %d anos\n", idade);
//é so pra dizer o local onde a variavel vai ser impressa na tela