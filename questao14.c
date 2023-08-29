#include <stdio.h>

int main(void) {

  int c = 0;
  float f = 0;
  puts("Insira a temperatura em graus Celsius:");
  scanf("%d", &c);

  f = (9 * c + 160) / 5;
  printf("A temperatura convertida para Fahrenheit é %.1fF", f);
  return 0;
}
