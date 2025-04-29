#include<stdio.h>
#include<stdlib.h>

void organizaVetor(int *x, int *y, int *z, int size) {
  int buffX = 0, buffY = 0;

  for (int i = 0; i <= size * 2; i++)
  {
    if (i % 2 == 0) {
      z[i] = x[buffX];
      buffX++;
    }
    if (i % 2 != 0) {
      z[i] = y[buffY];
      buffY++;
    }
  }
  
}

int main() {
  int num = 5;
  int *x = (int*)malloc(num * sizeof(int));
  int *y = (int*)malloc(num * sizeof(int));
  int *z = (int*)malloc((num * 2) * sizeof(int));

  organizaVetor(x, y, z, num);

  for (int i = 0; i < num*2; i++)
  {
    printf("%d \n", z[i]);
  }

  free(x);
  free(y);
  free(z);
}