#include <stdio.h>

int main() {
  char nome[50];  // Array para armazenar o nome
  int idade;      // variavel para idadade
  float altura;   // variavel altura

  //Entradas do Usuario
  printf("Digite seu nome:");
  fgets(nome, sizeof(nome), stdin); // le a entrada do usuario 
  printf("Digite sua idade:");
  scanf("%d", &idade);

  printf("Digite sua altura:");
  scanf("%d", &altura);

  // Sainda  dos dados
  printf("\n----------Dados Informados-----------\n");
  printf("Nome: %s", nome);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  return 0;
}