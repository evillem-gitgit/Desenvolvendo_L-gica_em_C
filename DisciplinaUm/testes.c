#include <stdio.h>//biblioteca padrao de entrada e saida
#include <time.h>
#include <stdlib.h>
//system("pause"); so da pra usar com essa biblioteca ai acima


int main() {


    // int idade = 18;
    // float altura = 1.55;
    // double peso = 55.5;//armazena numeros com mais precisao e maiores casas decimais
    // char letra = 'A';//armazena apenas um caractere

    // char nome[5] = "Maria";
//No exemplo acima, nome pode armazenar até 4 caracteres mais o caractere nulo.
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
    // int quantidade;

    // printf("Sua idade é: %d anos\n", idade);

    // scanf("%d", &quantidade);

    // printf("Quantidade: %d\n", quantidade);
    // printf("Hello, World!\n");
    // system("pause");
    // return 0;




//❗❗❗❗❗❗❗❗❗❗
//ATENÇÃO: essa poha aqui >  %d  <
//printf("Sua idade é: %d anos\n", idade);
//é so pra dizer o local onde a variavel vai ser impressa na tela




//Esse "!" é um operador logico usado como
// o NOT ele inverte o valor de True para 
// False ou o contrario

    // int a;
    // if (!a) {
    // printf("True a é zero.\n");
    // }
    // else{
    //     printf("False.\n");
    // }


    // int idade = 61;

    // if(idade < 15){
    //     printf("vc é criança");
    // }
    // else if(idade >= 15 && idade <= 17){
    //     printf("adolescente");
    // }
    // else if(idade >=18 && idade<= 60){
    //     printf("vc é adulto");
    // }
    // else{
    //     printf("vc é idoso");
    // }

 
    
    // int idade = 61;
    // float rendaMensal = 20011;

    // if(idade > 60 || idade < 18){
    //     if (rendaMensal < 2000)
    //     {
    //         printf("Você está qualificado para o desconto especial");
    //     }
    //     else{
    //         printf("Você não está qualificado para o desconto devido à renda");
    //     }
    
    // }
    // else{
    //     printf("Você não pq idade");
    // }

    //int dia = 1;

    // switch (dia){
    //     case 1:
    //         printf("segunda");
    //         break;

    //     case 2:
    //         printf("segunda");
    //         break;
        
    //     default:
    //         printf("se nenhum dos casos acima for verdadeiro");
    //         break;
    // }




//   int opcao;
//   int numeroSecreto, palpite;

//   printf("Menu Principal\n");
//   printf("1. Iniciar Jogo\n");
//   printf("2. Ver Regras\n");
//   printf("3. Sair\n");
//   printf("Escolha uma opção: \n");
//   scanf("%d", &opcao);

//   switch (opcao) {
//     case 1:
//       srand(time(0));
//       numeroSecreto = rand() % 10 + 1;
//       printf("Adivinhe o número (entre 1 e 10): \n");
//       scanf("%d", &palpite);

//       if (palpite == numeroSecreto) {
//         printf("Parabéns! Você acertou!\n");
//       } else {
//         printf("Você errou. O número era %d.\n", numeroSecreto);
//       }
//       break;
//     case 2:
//       printf("Regras do Jogo:\n");
//       printf("1. Escolha uma opção no menu.\n");
//       printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
//       printf("3. O jogo termina quando você escolhe 'Sair'.\n");
//       break;
//     case 3:
//       printf("Saindo...\n");
//       break;
//     default:
//       printf("Opção inválida. Tente novamente.\n");
//   }

//////////////////////////////////////////////////////////////////////////



//   int opcao;
//   int numeroSecreto, palpite;

//   printf("Menu Principal\n");
//   printf("1. Iniciar Jogo\n");
//   printf("2. Ver Regras\n");
//   printf("3. Sair\n");
//   printf("Escolha uma opção: \n");
//   scanf("%d", &opcao);

//   switch (opcao) {
//     case 1:
//       srand(time(0));
//       numeroSecreto = rand() % 10 + 1;
//       printf("Adivinhe o número (entre 1 e 10): \n");
//       scanf("%d", &palpite);

//       if (palpite == numeroSecreto) {
//         printf("Parabéns! Você acertou!\n");
//       } else {
//         printf("Você errou. O número era %d.\n", numeroSecreto);
//       }
//       break;
//     case 2:
//       printf("Regras do Jogo:\n");
//       printf("1. Escolha uma opção no menu.\n");
//       printf("2. O jogo termina quando você escolhe 'Sair'.\n");
//       break;
//     case 3:
//       printf("Saindo...\n");
//       break;
//     default:
//       printf("Opção inválida. Tente novamente.\n");
//   }


/*

////////////////////////////////////////////////////////////////////////////////

    int contador = 1;
    while (contador <= 3)
    {
          
        int escolhaJogador, escolhaComputador, partidaGanhaJogador, partidaGanhaPC;

        srand(time(0));
        escolhaComputador = rand() % 3 + 1;
        
        printf("\n");
        printf("Vamos jogar jokenpo.\n");
        printf("1. PEDRA 🪨 \n");
        printf("2. PAPEL 📄 \n");
        printf("3. TESOURA ✂️ \n");
        printf("escolha sua jogada:\n");
        scanf("%d", &escolhaJogador);
            
        switch (escolhaJogador)
            {
            case 1:
                printf("vc escolheu 🪨\n");
                break;
            case 2:
                printf("vc escolheu 📄\n");
                break;
            case 3:
                printf("vc escolheu ✂️\n");
                break;
            
            default:
                printf("opcao invalida");
                break;
            }

        switch (escolhaComputador)
            {
            case 1:
                printf("COMPUTADOR escolheu 🪨\n");
                break;
            case 2:
                printf("COMPUTADOR escolheu 📄\n");
                break;
            case 3:
                printf("COMPUTADOR escolheu ✂️\n");
                break;
            }

            if (escolhaComputador == escolhaJogador)
            {
                printf("EMPATE\n");
                printf("\n");
            }
            else if((escolhaComputador == 1) && (escolhaJogador == 3) ||
                    (escolhaComputador == 2) && (escolhaJogador == 1) ||
                    (escolhaComputador == 3) && (escolhaJogador == 2))
            {
                partidaGanhaPC++;
                printf("O PC GANHOU😂\n");
                printf("\n");
            }
            else{
                partidaGanhaJogador++;
                printf("vc ganhou👍😀\n");
                printf("\n");
            }

            while (contador == 3)
            {
                if(partidaGanhaJogador > partidaGanhaPC){
                printf("VC GANHOU A MELHOR DE TRÊS👍😀\n");
                }
                else if(partidaGanhaJogador < partidaGanhaPC){
                printf("O PCCCC GANHOU😂 NA MELHOR DE TRÊS\n");

                }
                else{
                    printf("EMPATE NA MELHOR DE TRÊS\n");
                    printf("\n");
                }
                break;
            }
            
               
            printf("Rodada: %d", contador);
            contador++; 

    }
    */

//////////////////////////////////////////////////////////////////////////


    // int num = 0;
   
    // printf("Digite um número (negativo para sair): \n");
    // scanf("%d", &num);
   
    // while (num >= 0) {
    //     printf("Você digitou: %d\n", num);
       
    //     printf("Digite um número (negativo para sair): \n");
    //     scanf("%d", &num);
    // }
   
    // printf("Número negativo detectado. Saindo...\n");
   
    // return 0;




    //ATENÇÃO ESSE É "DO WHILE"
    
    // int num = 0;
    // do {
    //     printf("Digite um número (negativo para sair): \n");
    //     scanf("%d", &num);
    // }
    // while (num >= 0);
    
///////////////////////////////////////////////////////////////////////////////////////



    // for (int contador = 1; contador <= 5; contador = contador + 1)
    // //    mesmo     que                   contador++                               
    // {
    //    printf("%d\n", contador);
    // }

    // for (int contador = 0; contador <= 100; contador = contador + 10)
    // //    mesmo     que                   contador+= 10                               
    // {
    //    printf("%d\n", contador);
    // }

    // for (int contador = 100; contador >= 5; contador = contador - 1)
    // //                     ele vai ter que ser maior ou igual a 5  
    //                       ou seja ele vai diminuir ate parar no 5                     
    // {
    //    printf("%d\n", contador);
    // }


/// atividades do AVA :

//WHILE

    // int contador = 0;

    // while(contador <=10){
    //     if(contador%2==0){
    //         printf("par : %d\n", contador);
    //     }
    // contador++;
    // }


// DO WHILE:

    // int numero;

    // do{
    //     printf("digite um numero PAR: ");
    //     scanf("%d", &numero);

    //     if(numero %2 == 0){
    //         printf("%d é par!\n", numero);
    //         printf("SAINDO... \n");
    //     }
    //     else{
    //         printf("%d é impar!\n", numero);

    //     }


    // }while(numero %2 != 0);

    // printf("VC CONSEGUI JA SAIU DO 'DO WHILE'... ");



// FOR:

    // int mult, numero = 0;
    // printf("digite qual tabuada c quer: ");
    // scanf("%d", &numero);


    // for(int contador = 1; contador <=10; contador++){
        
    //     printf("%d X %d = %d\n", contador, numero,  contador * numero);
    // }



//✅ Validação de idade (cenário real: formulários)

    // int idade;
    // printf("digitar uma idade válida: ");
    // scanf("%d", &idade);
    // printf("print antes do while!\n");

    // while (idade <= 0 || idade > 120)
    // {
    //     printf("tente uma idade válida: ");
    //     scanf("%d", &idade);
    // }


}