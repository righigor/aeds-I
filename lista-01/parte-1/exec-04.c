#include<stdio.h>

int main() {

  float eleitores, brancos, nulos, validos;

  printf("Números de eleitores: ");
  scanf("%f", &eleitores);
  printf("Números de votos brancos: ");
  scanf("%f", &brancos);
  printf("Números de votos nulos: ");
  scanf("%f", &nulos);
  printf("Números de votos validos: ");
  scanf("%f", &validos);

  float perctBrancos, perctNulos, perctValidos;

  perctBrancos = (brancos / eleitores) * 100;
  perctNulos = (nulos / eleitores) * 100;
  perctValidos = (validos / eleitores) * 100;

  printf("Votos válidos: %.0f%% \nVotos Nulos: %.0f%% \nVotos Brancos: %.0f%%", perctValidos, perctNulos, perctBrancos);
}