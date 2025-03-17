#include<stdio.h>

int main() {
  float h, pi, peso;
  char sexo;

  printf("Digite a altura: ");
  scanf("%f", &h);
  printf("Digite o peso: ");
  scanf("%f", &peso);
  printf("Digite o sexo (M/F): ");
  scanf(" %c", &sexo);

  if (sexo == 'M' || sexo == 'm') {
    pi = (72.7 * h) - 58;
    if (peso > pi) {
      peso = peso - pi;
      printf("Você deve emagrecer %.2fkg\n", peso);
      return 0;
    }
    peso = pi - peso;
    printf("Você deve engordar %.2fkg\n", peso);
    return 0;
  }
  if (sexo == 'F' || sexo == 'f') {
    pi = (62.1 * h) - 44.7;
    if (peso > pi) {
      peso = peso - pi;
      printf("Você deve emagrecer %.2fkg\n", peso);
      return 0;
    }
    peso = pi - peso;
    printf("Você deve engordar %.2fkg\n", peso);
    return 0;
  }
  printf("Sexo inválido\n");
  return 0;
}