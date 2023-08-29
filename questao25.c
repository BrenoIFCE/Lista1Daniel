#include <stdio.h>

int main(void) {

  int segundos, resto = 0;
  puts("Insira a quantidade de segundos:");
  scanf("%d", &segundos);

  resto = segundos % 3600;
  printf("Passou %d horas, %d minutos e %d segundos.", segundos / 3600, resto / 60, resto % 60);
  
  return 0;
}
