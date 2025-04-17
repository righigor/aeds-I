#include<stdio.h>
#include<stdlib.h>

float media(int *vetor, int n) {
  int aprovados = 0;
  int soma = 0;
  for (int i = 0; i < n; i++)
  {
    if (vetor[i] >= 6) {
      aprovados++;
      soma += vetor[i];
    }  
  }
  return (float) soma / aprovados;
}

int main() {
  int i = 0;
  int linhas = 100;
  int input = 0;

  int *matriz = (int*)malloc(linhas * sizeof(int*));


  while (input != 1) {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%d", &matriz[i]);

    i++;

    printf("Digite 1 para finalizar: ");
    scanf("%d", &input);

    if (input == 1) break;
  }

  printf("A media das notas dos aprovados é: %.2f", media(matriz, i));

  return 0;
}