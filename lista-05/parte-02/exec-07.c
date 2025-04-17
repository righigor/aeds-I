#include<stdio.h>

void troca(int *x, int *y) {
  int aux; // variavel auxiliar
  aux = *x; //guarda o valor apontado por X (valor de a)
  *x = *y;  //Atribui ao endereço apotado por x o valor apontado por y (valor de b)
  *y = aux; // Atribui ao endereço apontado por y o valor salvo em aux (valor de a)
}

int main() {
  int a = 5, b = 2; // declarando variaveis e recebendo valor

  troca(&a, &b); // função, passando os endereços de a e b
  printf("\n%i, %i\n", a, b);
}


// Letra A)
// 2, 5