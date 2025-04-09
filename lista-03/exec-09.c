#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// rand() % 100

int main() {

    int n, alet;
  do {
    alet = (rand() % 100);

    printf("chute um numero: ");
    scanf("%d", &n);

    if (n == alet) {
        printf("seu chute: %d\n", n);
        printf("numero random: %d\n", alet);
        printf("PARABENS VOCE ACERTOU!!");
        return 0;
    }
    printf("seu chute: %d\n", n);
    printf("numero random: %d\n", alet);
    printf("Errou. Tente novamente\n");
  } while (n != alet);
}

