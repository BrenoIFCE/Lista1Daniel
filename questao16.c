#include <stdio.h>

int main(void) {

  int hora, trabalho, inss = 0;
  
  puts("Insira o valor da hora da aula do professor:");
  scanf("%d", &hora);
  
  puts("Insira o a quantidade de horas trabalhadas no mês desse professor:");
  scanf("%d", &trabalho);
  
  puts("Insira a porcentagem de desconto do INSS:");
  scanf("%d", &inss);

  float bruto = hora * trabalho;
  float liquido = hora * trabalho * (inss * 0.01);

  printf("O salário bruto desse professor é R$%.2f\n", bruto);
  printf("O salário líquido desse professor é R$%.2f", bruto - liquido);
  
  return 0;
}
