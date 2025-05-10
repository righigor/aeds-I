#include<stdio.h>
#include<stdlib.h>


int regexEmail(char *v, int size) {
    int pos;
    int isValid = 0;

    for (int i = 0; i < size; i++)
    {
        if (v[i] == '@') {
            pos = i;
            isValid = 1;
            break;
        }
    }

    if (isValid) {
        printf("Posição do @: %d\n", pos);
    }
    return isValid ? 1 : -1;
}

int main() {
    int isValid, size = 64;
    char *email = (char*)malloc(size * sizeof(char));

    printf("Digite um email: ");
    fgets(email, size, stdin);

    isValid = regexEmail(email, size);

    isValid == 1 ? printf("Email válido") : printf("Email inválido");

    free(email);
    return 0;
}