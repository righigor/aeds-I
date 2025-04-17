#include<stdio.h>

float mediaArit(int notas[]) {
  int soma = 0;

  for (int i = 0; i < 3; i++)
  {
    soma += notas[i];
  }
  return (float)soma / 3;
}

float mediaPond(int notas[]) {
  int soma = 0;

  soma = (notas[0] * 5) + (notas[1] * 3) + (notas[2] * 2);

  return (float)soma / 10;
}

float calculaMedia(int notas[], char media) {
  if (media == 'P' || media == 'p') {
    return mediaPond(notas);
  }

  if (media == 'A' || media == 'a') {
    return mediaArit(notas);
  }

  return 1;
}

int main() {
  int notas[3];
  char media;

  printf("Entre com as 3 notas: ");
  scanf("%d %d %d", &notas[0], &notas[1], &notas[2]);

  printf("Digite qual média quer calcular: ");
  scanf(" %c", &media);

  printf("A média é: %.2f", calculaMedia(notas, media));
}