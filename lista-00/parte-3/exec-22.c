#include<stdio.h>

const float PI = 3.14159;

int main() {
  float graus, rad;

  printf("Digite o ângulo em graus: ");
  scanf("%f", &graus);
  rad = graus * PI / 180;
  printf("O ângulo em radianos foi: %.2f\n", rad);
  return 0;
}