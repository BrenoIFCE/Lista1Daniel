#include <stdio.h>

int main(void) {

  float conta = 0;

  puts("Digite o valor da conta do restaurante:");
  printf("R$ ");
  scanf("%f", &conta);

  printf("O valor total a pagar será R$ %.2f", conta + conta * 0.1);

  return 0;
}
