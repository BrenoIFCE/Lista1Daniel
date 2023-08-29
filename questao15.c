#include <stdio.h>

int main(void) {

  float dias = 0;
  puts("Insira a quantidade de dias trabalhados pelo indivíduo:");
  scanf("%f", &dias);

  if(dias >= 0 && dias <= 10){

    printf("O valor a ser pago ao indivíduo pelos dias trabalhados é R$ %.2f", (dias * 50.25) / 0.1);
    
  } else if(dias >= 11 && dias <= 20){

    printf("O valor a ser pago ao indivíduo pelos dias trabalhados é R$ %.2f", ((dias * 50.25) * 0.2) / 0.1);
    
  } else if(dias >= 21){
    
    printf("O valor a ser pago ao indivíduo pelos dias trabalhados é R$ %.2f", ((dias * 50.25) * 0.3) / 0.1);
    
  }
  return 0;
}
