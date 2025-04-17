#include<stdio.h>

int getMenor(int a, int b, int c) {
  int menor;

  menor = (a < b) ? a : b;
  menor = (c < menor) ? c : menor;

  return menor;
}

int main() {
  int a, b, c;

  printf("Digite três números: ");
  scanf("%d %d %d", &a, &b, &c);

  printf("O menor número entre eles é: %d", getMenor(a, b, c));
}