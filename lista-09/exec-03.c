#include<stdio.h>

void printaNums(int n) {
    if(n == 0) {
        printf("%d", n);
        return;
    }
    printf("%d ", n);
    printaNums(n - 1);
}

int main() {
    int n = 10;

    printaNums(n);
    return 0;
}