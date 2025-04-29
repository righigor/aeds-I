#include<stdio.h>

void calcFibonacci(long long vetor[]) {
  vetor[0] = 0;
  vetor[1] = 1;
  for (int i = 2; i < 1001; i++) {
    vetor[i] = vetor[i - 1] + vetor[i - 2];
  }
}

int main() {
  long long fib[1001];
  int input;

  calcFibonacci(fib);

  do
  {
    printf("Digite uma posição da sequencia de Fibonacci: ");
    scanf("%d", &input);

    printf("O número correspondente a posição %d é o: %lld\n", input, fib[input]);
  } while (input >= 0 && input < 1001);

  return 0;
}