#include<stdio.h>

void printaString(char *v, int size) {
    printf("%c", v[size - 1]);
    if(size == 1) {
        return;
    }
    printaString(v, size - 1);
}

int main() {
    char *palavra = "teste";

    printaString(palavra, 5);
    return 0;
}