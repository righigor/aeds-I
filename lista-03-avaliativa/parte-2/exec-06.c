#include<stdio.h>
#include<string.h>

int main() {

  float h, pi;
  char sexo;

  printf("Digite a altura: ");
  scanf("%f", &h);
  printf("Digite o sexo (M/F): ");
  scanf(" %c", &sexo);

  if (sexo == 'M' || sexo == 'm') {
    pi = (72.7 * h) - 58;
    printf("O peso ideal é %.2f\n", pi);
    return 0;
  }
  if (sexo == 'F' || sexo == 'f') {
    pi = (62.1 * h) - 44.7;
    printf("O peso ideal é %.2f\n", pi);
    return 0;
  }
  printf("Sexo inválido\n");
  return 0;
}