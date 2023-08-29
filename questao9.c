#include <stdio.h>

int main(void) {

  int numero = 0;
  
  puts("Insira um número:");
  scanf("%d", &numero);

  printf("O sucessor desse número é %d\n", numero+1);
  printf("O antecessor desse número é %d\n", numero-1);
  return 0;
}
