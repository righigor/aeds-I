#include<stdio.h>
#include<string.h>
#include<stdbool.h>


bool isPalindromo(char p[]) {
  char palindromo[128];
  int length = strlen(p);
  int index = 0;

  for (int i = length - 1; i >= 0; i--) {
    palindromo[index] = p[i];
    index++;
  }
  palindromo[index] = '\0';
  
  return strcmp(p, palindromo) == 0;
}

int main() {
  char string[128];
  bool isPalin;

  printf("Digite um palavra: ");
  fgets(string, 128, stdin);

  size_t length = strlen(string);
  if (string[length - 1] == '\n') {
      string[length - 1] = '\0';
  }

  isPalin = isPalindromo(string);

  if (isPalin) {
    printf("%s é palidromo", string);
    return 0;
  }

  printf("%s não é palíndromo!", string);
  return 0;
}