#include<stdio.h>

int main() {
  float real, dolar, cotacao;
  printf("Digite o valor em reais: ");
  scanf("%f", &real);
  printf("Digite a cotação do dólar: ");
  scanf("%f", &cotacao);
  dolar = real / cotacao;
  printf("O valor em dólares foi: %.2f\n", dolar);
  return 0;
}