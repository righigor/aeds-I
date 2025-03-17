#include<stdio.h>

int main() {
  float km, ms;
  printf("Digite a velocidade em km/h: ");
  scanf("%f", &km);

  ms = km / 3.6;

  printf("A velocidade %.2f km/h é igual a %.2f m/s\n", km, ms);
  return 0;
}