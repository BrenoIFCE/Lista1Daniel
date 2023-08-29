#include <stdio.h>

int main(void) {

  int a, b = 0;
  puts("Insira o valor A:");
  scanf("%d", &a);

  puts("Insira o valor B:");
  scanf("%d", &b);

  printf("A soma de A e B é %d\n\n", a + b);
  printf("O produto de A e B é %d\n\n", a * b);
  printf("A diferença entre A e B é %d\n\n", a - b);
  printf("O quociente de A e B é %d\n\n", a / b);
  printf("O resto da divisão de A e B é %d\n\n", a % b);
  return 0;
}
