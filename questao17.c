#include <stdio.h>
int main(void) {

  int numero = 0;
  puts("Insira um número qualquer para identificar seu módulo:");
  scanf("%d", &numero);

  printf("O módulo desse número é %d", abs(numero));
  return 0;
}
