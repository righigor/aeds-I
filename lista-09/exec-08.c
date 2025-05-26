#include<stdio.h>

void printaNum(int num) {
    printf("%d", num % 10);
    if (num / 10 == 0) {
        return;
    }
    printaNum(num / 10);
}

int main() {
    int num = 123456;
    printaNum(num);
 
    return 0;
}