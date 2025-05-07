#include <stdio.h>
#include <time.h>

struct Guerreiro {
  int id_guerreiro;
  int ataque;
  int defesa;
  int carisma;
  int pontos_vida;
};

int rolaDados() {
  int dado1 = 1 + (int)(drand48() * 6);
  int dado2 = 1 + (int)(drand48() * 6);
  int dado3 = 1 + (int)(drand48() * 6);

  return dado1 + dado2 + dado3;
}

int somaTresRolaDados() {
    return rolaDados() + rolaDados() + rolaDados();
}

void criaGuerreiro(struct Guerreiro *guerreiro) {
  guerreiro->ataque = rolaDados();
  guerreiro->carisma = rolaDados();
  guerreiro->defesa = rolaDados();
  guerreiro->pontos_vida = somaTresRolaDados();
}

int bonusCarisma(int carisma) {
  if (carisma == 18) {
    return 3;
  }
  if (carisma == 16 || carisma == 17) {
    return 2;
  }
  if (carisma == 14 || carisma == 15) {
    return 1;
  }
  if (carisma == 6 || carisma == 7) {
    return -1;
  }
  if (carisma == 4 || carisma == 5) {
    return -2;
  }
  if (carisma == 3) {
    return -3;
  }

  return 0;
}

void ataca(struct Guerreiro *g1, struct Guerreiro *g2) {
    int golpe = 0;
    int dados = somaTresRolaDados();
    int bonus = bonusCarisma(g1->carisma);
    golpe = dados + bonus + g1->ataque;

    int escudo = 0;
    int dadosDef = somaTresRolaDados();
    int bonusDef = bonusCarisma(g2->carisma);
    escudo = dadosDef + bonusDef + g2->defesa;

    int dano = golpe - escudo;
    if (dano > 0) {
        if (g2->pontos_vida > 0) {
            g2->pontos_vida -= dano;
        }
    }
}

int main() { srand48(time(NULL)); }