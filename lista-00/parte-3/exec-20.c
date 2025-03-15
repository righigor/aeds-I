#include<stdio.h>

int main() {
  float vKm, vMs;
  printf("Digite a velocidade em km/h: ");
  scanf("%f", &vKm);
  vMs = vKm / 3.6;
  printf("A velocidade em m/s foi: %.2f\n", vMs);
  return 0;
}