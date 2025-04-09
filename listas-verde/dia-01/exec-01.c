#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    int entradas;
    printf("Digite a quantidade de entradas: ");
    scanf("%d", &entradas);

    for (int i = 0; i < entradas; i++)
    {
      char input[1001];
      int alunos, notas[1000];
      printf("Digite o numero de alunos e sua medias: ");
      scanf(" %[^\n]", input);

      alunos = atoi(strtok(input, " "));

      for (int j = 0; j < alunos; j++) {
        char *token = strtok(NULL, " ");
        if (token != NULL) {
          notas[j] = atoi(token);
        };
      }

      for (int j = 0; i < alunos; i++)
      {
        printf("%d\n", notas[j]);
      }
      
    }
    
}