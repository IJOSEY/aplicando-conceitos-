#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//estruturar jogo
int main() {

int numeropc, numeroplayer;
int comparar, ajuda;
char opcao;
//2° com putador deve gerar um número aleatório de 1 há 100
srand(time(0));
numeropc = rand() % 100 + 1;

printf("***JOGO DA ADIVINHAÇÃO***\n\n");
//1° objetivo do jogo e adivinhar se número escolhido pelo usário é maior menor ou igial. 
printf("Tente advinha se seu número maior, menor ou igual do computador!!");
printf("Escolha uma das opções baixo!\n");
//3° menu com 3 opções de aposta. > < =
printf("M. Número é maior.\n");
printf("N. Número é menor.\n");
printf("I. Número é igual.\n");
printf("Digite sua opção: ");
scanf("%c",&opcao);
//4° depois receber número do usário.

switch (opcao)
{
case 'M':
case 'm':
printf("Digite seu número de 1 á 100:");
scanf("%d",&numeroplayer);

    if ( numeroplayer > numeropc)
    {
        printf("Você venceu!!\n");
        printf("Número do usuário: %d é maior que número da maquina: %d\n",numeroplayer,numeropc);
    }
    else
    {
        printf("Você perdeu!!\n");
        printf("Número do usuário: %d não é maior que número da maquina: %d \n",numeroplayer,numeropc);
    }
    
    break;
case 'N':
case 'n':
printf("Digite seu número de 1 á 100:");
scanf("%d",&numeroplayer);

    if ( numeroplayer < numeropc)
    {
        printf("Você venceu!!\n");
        printf("Número do usuário: %d é menor que número da maquina: %d\n",numeroplayer,numeropc);
    }
    else
    {
        printf("Você perdeu!!\n");
        printf("Número do usuário: %d não é menor que número da maquina: %d\n",numeroplayer,numeropc);
    }
    break;
case 'I':
case 'i':

printf("Digite seu número de 1 á 100:");
scanf("%d",&numeroplayer);

    if ( numeroplayer == numeropc)
    {
        printf("Você venceu!!\n");
        printf("Número do usuário: %d é igual ao número da maquina: %d\n",numeroplayer,numeropc);
    }
    else
    {
        printf("Você perdeu!!\n");
        printf("Número do usuário: %d não é igual ao número da maquina: %d\n",numeroplayer,numeropc);
    }
    break;
default:
printf("Opção invalida!!\n");
    break;
}

//5° jogo deve compara o número do usário com do computador.
   //a. se escolher maior número for maior você ganhou.
   //b. se escolher menor número for menor ganhou.
   //c. se escolher igual número for igual ganhou.
   //d. caso contrário perdeu.
//6°imprimir número do usário e computador para verificar a resposta.   
return 0;
}
