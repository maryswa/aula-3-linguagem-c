#include <stdio.h>

int main() {
  // variaveis
  float peso, altura, imc;

  // Entrada dos dados

  printf("Digite seu peso:");
  scanf("%f", &peso);

  printf("Digite sua altura:");
  scanf("%f", &altura);

  // calculando o imc
  imc = peso / (altura * altura);

  // exibindo o imc
  printf("Seu imc é: %.2f\n", imc);

  // classificanso imc
  if (imc < 18.5) {
    printf("Classificação:Abaixo do peso\n");
  } else if (imc >= 18.5 && imc < 24.9) {
    printf("Classificação:Peso normal\n");
  }  else if (imc >= 25 && imc < 29.9) {
    printf("Classificação:Sobrepeso\n");
  } else if (imc >= 30 && imc < 34.9){
    printf("Classificação: Obesidade\n");
  }
    
  return 0;
}