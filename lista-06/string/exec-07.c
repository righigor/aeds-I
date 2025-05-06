#include<stdio.h>

void upper(char p[]) {
  int i = 0;
  
  while (p[i] != '\0')
  {
    if (p[i] >= 'a' && p[i] <= 'z') {
      p[i] = p[i] - 32;
    }
    i++;
  }
}

int main() {
  char string[128];

  printf("Digite um palavra em minusculo: ");
  fgets(string, 128, stdin);

  upper(string);

  printf("%s\n", string);

  return 0;
}