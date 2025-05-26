#include<stdio.h>

void printaNums(int i, int n) {
    if(i == n) {
        printf("%d", i);
        return;
    }
    printf("%d ", i);
    printaNums(i + 1, n);
}

int main() {
    int i = 0, n = 10;

    printaNums(i, n);
    return 0;
}