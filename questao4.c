#include <stdio.h>

int main(void) {

  float x = 0;
  puts("Insira um valor inteiro:");
  scanf("%f", &x);

  printf("O triplo desse valor será: %.0f\n", x * 3);
  printf("O quadrado desse valor será: %.0f\n", x * x);
  printf("O meio desse valor será: %.1f\n", x / 2);

  return 0;
}
