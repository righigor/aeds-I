#include<stdio.h>

const float PI = 3.141592;

int main() {
  float raio, h, volume;
  printf("Digite o raio da base do cilindro: ");
  scanf("%f", &raio);
  printf("Digite a altura do cilindro: ");
  scanf("%f", &h);
  volume = PI * raio * raio * h;
  printf("O volume do cilindro foi: %.2f\n", volume);
  return 0;
}