#include <stdio.h>

int main(void) {
  int val = 0;
  
  puts("Insira um valor para fazer a conversão:");
  scanf("%d", &val);

  printf("A conversão do valor inserido para hexadecimal: %X\n", val);
  printf("A conversão do valor inserido para octal: %o\n", val);
  
  return 0;
}
