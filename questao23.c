#include <stdio.h>

int main(void) {

  char numero1, numero2, numero3 = 0; 
  puts("Insira um número de 3 dígitos:");
  scanf("%c%c%c", &numero1, &numero2, &numero3);
  printf("%c%c%c", numero3, numero2, numero1);
  return 0;
}
