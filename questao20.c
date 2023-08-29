#include <stdio.h>

int main(void) {

  int numero = 0;
  puts("Insira um número inteiro:");
  scanf("%d", &numero);

  numero % 2 == 0 ? printf("Esse número é par.") : printf("Esse número é ímpar.");
  return 0;
}
