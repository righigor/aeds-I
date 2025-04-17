#include<stdio.h>

int main() {
  int x, *p, **q;
  p = &x;
  q = &p;
  x = 10;
  // Linha errada ->  printf("\n%d \n", &q);
  printf("\n%d \n", **q);
  return 0;
}