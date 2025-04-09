#include<stdio.h>

int main() {

    int n, n1, fat = 1;

    do {
        printf("digite um numero: ");
        scanf("%d", &n);
        n1 = n;
        while (n > 0) {
            fat *= n;
            n -= 1;
        }
        printf("%d! = %d\n", n1, fat);
    } while (n != 0);

}
