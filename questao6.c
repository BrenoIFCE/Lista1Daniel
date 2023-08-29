#include <stdio.h>

int main(void) {

  float altura = 0;
  puts("Insira a altura do indivíduo:");
  scanf("%f", &altura);

  char genero = 0;
  puts("Digite M para masculino ou F para feminino:");
  scanf(" %c", &genero);

  float M = 72.7 * altura - 58;
  float F = 62.1 * altura - 44.7;

  if(genero == 'M'){
  
     printf("O peso ideal dessa pessoa será %.2f", M);
    
  } else if(genero == 'F'){
    
     printf("O peso ideal dessa pessoa será %.2f", F);
    
  }
  return 0;
}
