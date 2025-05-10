#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int regexSenha(char *v, int max) {
  int maiuscula = 0;
  int minuscula = 0;
  int num = 0;
  int especial = 0;
  int size = strlen(v) > 8 ? 1 : 0;

  if (!size)
    return 0;

  for (int i = 0; i < max; i++) {
    if (isupper(v[i]))
      maiuscula = 1;
    if (islower(v[i]))
      minuscula = 1;
    if (isdigit(v[i]))
      num = 1;
    if (ispunct(v[i]))
      especial = 1;
    if (maiuscula && minuscula && num && especial)
      break;
  }

  if (maiuscula && minuscula && num && especial && size)
    return 1;

  return 0;
}

int main() {
  int max = 16, isValid;
  char *senha = (char *)malloc(max * sizeof(char));

  printf("Crie uma senha: ");
  fgets(senha, max, stdin);

  isValid = regexSenha(senha, max);

  if (isValid) {
    printf("Senha válida!\n");
  } else {
    printf("Senha inválida!\n");
  }
  free(senha);
  return 0;
}