#include <stdio.h>

int main(void) {
  int hora, minuto, segundo = 0;
  
  puts("Insira a quantidade de horas:");
  scanf("%d", &hora);

  puts("Insira a quantidade de minutos:");
  scanf("%d", &minuto);

  puts("Insira a quantidade de segundos:");
  scanf("%d", &segundo);

  int total = segundo + (minuto * 60) + (hora * 3600);

  printf("Terá um total de %d segundos", total);
  return 0;
}
