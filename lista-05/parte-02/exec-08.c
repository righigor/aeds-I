// int *p

// p++
// Incrementa o endereço armazenado em p, ou seja, faz o ponteiro p apontar para o próximo elemento do tipo que ele aponta.
// Se p aponta para a posição 1000 e o tipo é int (4 bytes), depois de p++, ele apontará para a posição 1004. - Só muda o endereço.


// (*p)++
// Incrementa o conteúdo apontado por p. Ou seja, o valor armazenado naquele endereço aumenta em 1.
// Se p aponta para um int com valor 5, após (*p)++, esse valor vira 6 - Endereço continua o mesmo

// *(p++)
// Primeiro, acessa o valor apontado por p, mas depois incrementa o ponteiro p
// É uma forma de acessar o conteúdo atual de p e depois mover o ponteiro para o próximo elemento. - Conteúdo não é alterado

// *(p+10)
// acessar o valor p[10]
