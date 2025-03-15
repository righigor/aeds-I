#include<stdio.h>

int main() {
  float valor = 780000, premio1, premio2, premio3;
  premio1 = valor * 0.46;
  premio2 = valor * 0.32;
  premio3 = valor - premio1 - premio2;
  printf("O primeiro ganhador receberá: R$%.2f\n", premio1);
  printf("O segundo ganhador receberá: R$%.2f\n", premio2);
  printf("O terceiro ganhador receberá: R$%.2f\n", premio3);
  return 0;
}