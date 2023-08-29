#include <stdio.h>

int main(void) {

  int inteiro1, inteiro2 = 0;
  
  puts("Insira o valor do primeiro inteiro:");
  scanf("%d", &inteiro1);
  
  puts("Insira o valor do segundo inteiro:");
  scanf("%d", &inteiro2);

inteiro1 % inteiro2 == 0 ? printf("%d é multiplo.", inteiro1) : printf("%d não é multiplo.", inteiro1);
  
  return 0;
}
