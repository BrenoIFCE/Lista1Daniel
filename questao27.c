#include <stdio.h>
#include <math.h>

int main(void) {

  float a, b, c = 0;
  puts("Insira o número A:");
  scanf("%f", &a);
  puts("Insira o número B:");
  scanf("%f", &b);
  puts("Insira o número C:");
  scanf("%f", &c);

  float ponderada = (a + b + c) / 3;
  float geometrica = pow(a * b * c, 1.0/3.0);
  
  printf("Média ponderada: %.2f\n", ponderada);
  printf("Média geometrica: %.2f", geometrica);
  return 0;
}
