#include<stdio.h>

int main() {
  int n1, n2, n3, soma, media, produto;

  printf("digite a primeira nota: ");
  scanf("%d", &n1);
  printf("digite a segunda nota: ");
  scanf("%d", &n2);
  printf("digite a terceira nota: ");
  scanf("%d", &n3);

  soma = n1 + n2 + n3;
  media = soma / 3;
  produto = n1 * n2 * n3;

  printf("A soma das notas é: %d\n", soma);
  printf("A média das notas é: %d\n", media);
  printf("O produto das notas é: %d\n", produto);  
}