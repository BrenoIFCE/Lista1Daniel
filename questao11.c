#include <stdio.h>

int main(void) {

  float dolar = 0;
  puts("Insira a cotação do dolar:");
  scanf("%f", &dolar);

  float real = 0;
  puts("Insira o quanto o indivíduo usará em R$ para converter em dolar:");
  scanf("%f", &real);

  printf("O indivíduo terá $%.2f no total.", real / dolar);
  return 0;
}
