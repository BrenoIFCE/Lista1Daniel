#include <stdio.h>

int main(void) {
  int numero = 0;
  puts("Insira um número");
  scanf("%d", &numero);

  numero = numero * numero;
  printf("O quadrado desse número é %d", numero);
  
  return 0;
}
