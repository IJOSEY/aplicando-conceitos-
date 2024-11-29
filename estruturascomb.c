#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int opcao;
    float nota1, nota2, nota3, media;

    printf("*** Menu do aluno ***\n\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("Calcular média.\n"); 
        printf("Digite a primeira nota: ");
        scanf("%f",&nota1);
        printf("Digite a segunda nota: ");
        scanf("%f",&nota2);
        printf("Digite a terceira nota: ");
        scanf("%f",&nota3);
        media = (nota1 + nota2 + nota3)/3;
        printf("A média é de: %.2f\n",media);
        break;
    case 2:
        printf("Definir status.\n");
        printf("Digite a sua média: ");
        scanf("%f",&media);
        break;
    case 3:
        printf("Finalizando sessão!!.....");
        break;
    
    default:
        printf("Opção inválida. Tente novamente!\n");
        break;
    }
}
