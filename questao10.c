#include <stdio.h>

int main(void) {

  float comprimento, largura, altura = 0;
  puts("Digite o COMPRIMENTO da caixa:");
  scanf("%f", &comprimento);

  puts("Digite o LARGURA da caixa:");
  scanf("%f", &largura);

  puts("Digite o ALTURA da caixa:");
  scanf("%f", &altura);

  float volume = comprimento * largura * altura;
  printf("O volume da caixa será %.2f", volume);
  return 0;
}
