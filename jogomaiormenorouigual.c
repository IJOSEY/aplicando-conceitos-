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
printf("Digite seu número de 1 á 100: ");
scanf("%d",&numeroplayer);

printf("número do computador: %d",numeropc);
//5° jogo deve compara o número do usário com do computador.
switch (opcao)
{
    //a. se escolher maior número for maior você ganhou.
case 'M':
case 'm':
printf("Você escolheu Maior!");
    
    comparar = numeroplayer > numeropc ? 1 : 0;

    if (comparar)
    {
        printf("Você venceu!!\n");
        printf("Número do usuário: %d é maior que número da maquina: %d\n",numeroplayer,numeropc);
        //6°imprimir número do usário e computador para verificar a resposta. 
    }
    else
    {
        printf("Você perdeu!!\n");
        printf("Número do usuário: %d não é maior que número da maquina: %d \n",numeroplayer,numeropc);
        //6°imprimir número do usário e computador para verificar a resposta. 
    }
    
    break;
    //b. se escolher menor número for menor ganhou.
case 'N':
case 'n':
printf("Você escolheu Menor!");

     comparar = numeroplayer < numeropc ? 1 : 0;

    if ( comparar)
    {
        printf("Você venceu!!\n");
        printf("Número do usuário: %d é menor que número da maquina: %d\n",numeroplayer,numeropc);
        //6°imprimir número do usário e computador para verificar a resposta. 
    }
    else
    {
        printf("Você perdeu!!\n");
        printf("Número do usuário: %d não é menor que número da maquina: %d\n",numeroplayer,numeropc);
        //6°imprimir número do usário e computador para verificar a resposta. 
    }
    break;
    //c. se escolher igual número for igual ganhou.
case 'I':
case 'i':
printf("Você escolheu Igual!");

 comparar = numeroplayer == numeropc ? 1 : 0 ;

    if ( comparar)
    {
        printf("Você venceu!!\n");
        printf("Número do usuário: %d é igual ao número da maquina: %d\n",numeroplayer,numeropc);
        //6°imprimir número do usário e computador para verificar a resposta. 
    }
    else
    {
        printf("Você perdeu!!\n");
        printf("Número do usuário: %d não é igual ao número da maquina: %d\n",numeroplayer,numeropc);
        //6°imprimir número do usário e computador para verificar a resposta. 
    }
    break;
    //d. caso contrário perdeu.
default:
printf("Opção invalida!!\n");
    break;
}   
return 0;
}
