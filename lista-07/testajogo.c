#include "jogo.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand48(time(NULL));

  struct Guerreiro *guerreiro1 = (struct Guerreiro *)malloc(sizeof(struct Guerreiro));
  struct Guerreiro *guerreiro2 = (struct Guerreiro *)malloc(sizeof(struct Guerreiro));

  guerreiro1->id_guerreiro = 1;
  guerreiro2->id_guerreiro = 2;

  criaGuerreiro(guerreiro1);
  criaGuerreiro(guerreiro2);

  while (guerreiro1->pontos_vida != 0 || guerreiro2->pontos_vida != 0) {
    ataca(guerreiro1, guerreiro2);

    printf("Após ataque:\n");
    printf("Guerreiro 1: PV = %d\n", guerreiro1->pontos_vida);
    printf("Guerreiro 2: PV = %d\n", guerreiro2->pontos_vida);
    if (guerreiro2->pontos_vida <= 0) {
      break;
    }
    ataca(guerreiro2, guerreiro1);
    printf("Após ataque:\n");
    printf("Guerreiro 1: PV = %d\n", guerreiro1->pontos_vida);
    printf("Guerreiro 2: PV = %d\n", guerreiro2->pontos_vida);
  }

  if (guerreiro1->pontos_vida == 0) {
    printf("\nVencedor: %d", guerreiro2->id_guerreiro);
  } else {
    printf("\nVencedor: %d", guerreiro1->id_guerreiro);
  }
  return 0;
}