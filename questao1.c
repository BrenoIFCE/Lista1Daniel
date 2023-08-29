#include <stdio.h>

int main(void) {
  
  int x = 0;
  x = 7 + 3*6/2-1; 
  printf("O valor de x é: %d\n", x);
  
  x = 0;
  x = 2%2 + 2*2-2/2;
  printf("O valor de x é: %d\n", x);

  x = 0;
  x = (3 * 9 * (3 + (9 * 3 / (3))));
  printf("O valor de x é: %d\n", x);
  
  return 0;
}
