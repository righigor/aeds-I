#include<stdio.h>

// Questão 07

// ALGORITMO 1
// int count = 0;
// int i;
// for (i = 0; i < n; i++)
// if (i % 2 == 1)
// count++;

// ALGORITMO 2
// for(int i = 1; i < n; i *= 2)
// if (i % 2 == 0)
// printf("Olá");

// a) será incrementado na variável count 1 apenas quando aparecer um número ímpar, logo, se n for 7, count será incremenentado 3 vezes(1, 3 e 5). Assim count = 3.

// b) o loop i é incrementado pelo seu dobro para cada repetição, logo, se n for 15, o loop ocorrerá 4 vezes(1, 2, 4 e 8). Será printado Olá nas vezes que i é par, ou seja, Olá será printado 3 vezes.

// 1)
// ALGORITMO 1
// a) int count = 0 - int i: 2 declarações de variáveis.
// b) count = 0 - i = 0
//    i = 0
//    i++ = n vezez
//    count++ = n vezes (apenas quando for impar) ou seja n/2
//    2 + n + n/2 = 1.5n + 2 vezes atribuições


// ALGORITMO 2
// a) int i = 1 - 1 declaração de variável.
// b) i = 1
//    i *= 2 = log2(n) + 1 vezes
//    1 + log2(n) + 1 = log2(n) + 2 vezes atribuições

// 2)
// ALGORITMO 1
// a) i < n acontece n + 1 vezes
// b) i % 2 == 1 acontece n vezes
// c) no melhor caso n = 0, ou seja, acontece 0 vezes
// d) no pior caso será 1.5n vezes

// ALGORITMO 2
// a) i < n acontece log2(n) + 1 vezes
// b) i % 2 == 0 acontece log2(n) + 1 vezes
// c) no melhor caso n = 1, ou seja, acontece 0 vezes
// d) no pior caso será log2(n) + 1 vezes