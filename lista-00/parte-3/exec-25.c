#include<stdio.h>
#include<math.h>

int main() {
  float a, b, c;
  printf("Digite dois catetos: ");
  scanf("%f %f", &a, &b);
  c = sqrt(pow(a, 2) + pow(b, 2));
  printf("A hipotenusa foi: %.2f\n", c);
  return 0;
}