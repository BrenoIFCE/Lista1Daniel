#include <stdio.h>

int main(void) {

  float real = 0;
  puts("Insira um valor real:");
  scanf("%f", &real);

  printf("O primeiro dígito desse número real é: %.0f", real);
  
  return 0;
}
