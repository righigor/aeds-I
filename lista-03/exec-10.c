#include<stdio.h>

int main() {

    int num;
    int i = 0;
    char bin1[100];

    printf("digite um numero: ");
    scanf("%d", &num);

    while (num > 0) {
        printf("i = %d\n", i);
        if (num % 2 == 0) {
            bin1[i] = "0";
            printf("string = %s\n", bin1);
            printf("num = %d \n", num);
            num = num / 2;
            printf("num = %d \n", num);
        }
        if (num % 2 != 0) {
            bin1[i] = "1";
            num = num / 2;
        }
        i++;
    }
    printf("em binario: %s", bin1);
}
