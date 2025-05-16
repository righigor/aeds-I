#ifndef JOGO_H
#define JOGO_H

struct Guerreiro {
  int id_guerreiro;
  int ataque;
  int defesa;
  int carisma;
  int pontos_vida;
};

int rolaDados();
int somaTresRolaDados();
void criaGuerreiro(struct Guerreiro *guerreiro);
int bonusCarisma(int carisma);
void ataca(struct Guerreiro *g1, struct Guerreiro *g2);

#endif