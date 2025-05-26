#include<stdio.h>
#include<math.h>

int somaCubicos(int n) {
    if (n == 1) {
        return 1;
    }

    return pow(n, 3) + somaCubicos(n - 1);
}

int main() {
    int n = 3;
    int res;

    res = somaCubicos(n);
    printf("o resultado é: %d", res);
    return 0;
}