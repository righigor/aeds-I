#include<stdio.h>

float produtoEscalar(float u[], float v[],int size) {
  float soma = 0;

  for (int i = 0; i < size; i++)
  {
    soma += u[i] * v[i];    
  }
  return soma;
}

int main() {

  float u[100];
  float v[100];
  int size = 5;

  for (int i = 0; i < size; i++)
  {
    u[i] = 2.0;
    v[i] = 3.0;
  }

  printf("%f\n", produtoEscalar(u, v, size));
}