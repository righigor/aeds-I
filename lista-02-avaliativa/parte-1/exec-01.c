#include<stdio.h>
#include<stdlib.h>


int main() {
    int *arranjoUm = (int*)malloc(5 * sizeof(int));
    int *arranjoDois = (int*)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &arranjoUm[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arranjoDois[i] = 2 * arranjoUm[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arranjoDois[i]);
    }
    

    free(arranjoUm);
    free(arranjoDois);

    return 0;
}