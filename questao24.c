#include <stdio.h>

int main(void) {

  float x = 0;
  int n = 0;
  puts("Insira o valor de X:");
  scanf("%f", &x);
  puts("Insira o valor de N:");
  scanf("%d", &n);

  float resultado = x * pow(2, n);
  printf("O resultado de X por 2 elevado a N é %.1f", resultado);
  return 0;
}
