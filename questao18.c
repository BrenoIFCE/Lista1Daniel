#include <stdio.h>

int main(void) {

  float raio = 0;
  puts("Insira o valor do raio do círculo:");
  scanf("%f", &raio);

  float diametro = raio * 2;
  float circunferencia = 2 * 3.14159 * raio;
  float area = 3.14159 * (raio * raio);

  printf("Diâmetro da circunferência: %f\n", diametro);
  printf("Perímetro da circunferência: %f\n", circunferencia);
  printf("Área da circunferência: %f\n", area);
  return 0;
}
