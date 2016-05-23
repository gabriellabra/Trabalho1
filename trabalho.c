#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // variaveis//
    int i, j, aux;
    float nota[30];
    char nome[30][30]; 
    char aux2[30];
    //introdução//
    printf("Olá, meu nome é Gabriel Rodrigues e este programa pode ser visto no seguinte endereço do github: https://github.com/gabriellabra/Trabalho1\n");

    //le o nome do aluno e a sua nota//
    for(i=0;i<=29;i++)
    {
        printf("Entre com o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("entre com a nota do %s: ", nome[i]);
        scanf("%f", &nota[i]);
    }
    //coloca em ordem decrescente//
    for(i=0;i<=29;i++ )
    {
        for(j=i+1;j<=29;j++) // sempre 1 elemento à frente
        {
          if ( nota[j] > nota[i] )
          {
             aux = nota[j];
             nota[j] = nota[i];
             nota[i] = aux;
             
             strcpy(aux2, nome[j]);
             strcpy(nome[j], nome[i]);
             strcpy(nome[i], aux2);
          }
        } 
    }
    //Legenda//
    printf("\n\nListagem da av1\n");
    printf("----------------\n");
    printf("Nome do aluno\tav1\n");
    //tabula os nomes e as notas//
    for(i=0;i<=29;i++)
    {
        printf("%s\t\t%.2f\n\n", nome[i], nota[i]);
   
        
    }
 return 0;
}
 