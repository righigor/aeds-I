#include<stdio.h>

void decToBin(int num) {
    if (num / 2 <= 0) {
        printf("%d", 1);
        return;
    }
    decToBin(num / 2);
    printf("%d", num % 2);
}

int main() {
    int num = 564;
    decToBin(num);
 
    return 0;
}