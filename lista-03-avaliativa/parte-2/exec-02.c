#include<stdio.h>

const float PI = 3.141592;
int main() {
  float raio, area;
  printf("Digite o raio do círculo: ");
  scanf("%f", &raio);

  area = PI * raio * raio;

  printf("A área do círculo de raio %.2f é igual a %.2f\n", raio, area);
  return 0;
}