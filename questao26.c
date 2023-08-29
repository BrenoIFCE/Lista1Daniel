#include <stdio.h>
#include <math.h>

int main(void) {

  float x1, x2, y1, y2 = 0;
  puts("Insira a coordenada de x1:");
  scanf("%f", &x1);
  puts("Insira a coordenada de x2:");
  scanf("%f", &x2);
  puts("Insira a coordenada de y1:");
  scanf("%f", &y1);
  puts("Insira a coordenada de y2:");
  scanf("%f", &y2);

  float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("A distância entre os 2 pontos no plano é %.2f", d);
  return 0;
}
