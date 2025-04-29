#include<stdio.h>

int main() {
  int anoAtual, idade;
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite o ano atual: ");
  scanf("%d", &anoAtual);
  printf("O ano de nascimento foi: %d\n", anoAtual - idade);
  return 0;
}