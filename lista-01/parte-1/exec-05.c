#include<stdio.h>
#include<math.h>

int main() {
    float capital, i;
    int  meses;
    printf("Digite o valor inicial: ");
    scanf("%f", &capital);
    printf("Digite a taxa de juros: ");
    scanf("%f", &i);
    printf("Digite o números de meses da aplicação: ");
    scanf("%d", &meses);
    float montante, taxa;
    taxa = 1 + i;
    montante = capital*(pow(taxa, meses));

   printf("%f", montante);
}