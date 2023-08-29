#include <stdio.h>

int main(void) {

  int a, b, c = 0;
  
  puts("Insira o valor de A:");
  scanf("%d", &a);

  puts("Insira o valor de B:");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;
  
  printf("Valor de A: %d\n", a);
  printf("Valor de B: %d\n", b);
  return 0;
}
