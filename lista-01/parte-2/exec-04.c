#include<stdio.h>

int main() {
  int dias, anos, semanas, dias_restantes;

  printf("Digite a quantidade de dias: ");
  scanf("%d", &dias);

  anos = dias / 365;
  semanas = (dias % 365) / 7;
  dias_restantes = (dias % 365) % 7;

  printf("%d dias equivalem a %d anos, %d semanas e %d dias.\n", dias, anos, semanas, dias_restantes);
  return 0;
}