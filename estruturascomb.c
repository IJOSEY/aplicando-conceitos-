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
        if ((nota1 >= 0 && nota1<=10)&&
            (nota2 >=0 && nota2<=10)&&
            (nota3 >= 0 && nota3<= 10))
        {
           printf("notas são validas!\n");
            media = (nota1 + nota2 + nota3)/3;
           printf("A média é de: %.2f\n",media);
        }
        else 
        {
            printf("notas são inválidas!\n");
        }
        
       
        break;
    case 2:
        printf("Definir status.\n");
        printf("Digite a sua média: ");
        scanf("%f",&media);

        /*media < 5 ? printf("Aprovado!\n") : printf("Reprovado!\n");*/
        if (media >= 7.0)
        {
            printf("Aluno aprovado!\n");
        }
        else if (media >= 5.0 && media < 7.0)
        {
            printf("Aluno está de recuperação!\n");
        } else
        {
            printf("Aluno está de reprovado!\n");
        }
        
        
        break;
    case 3:
        printf("Finalizando sessão!!.....");
        break;
    
    default:
        printf("Opção inválida. Tente novamente!\n");
        break;
    }
    return 0;
}
