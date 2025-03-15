#include<stdio.h>

int main() {
  char letra;
  printf("Digite uma letra maiuscula: ");
  scanf("%c", &letra);
  printf("A letra digitada foi: %c\n", letra + 32);
  return 0;
}