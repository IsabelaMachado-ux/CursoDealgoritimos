#include<stdio.h>
#include<stdlid.h>
#include <time.h>

int main(){
  // variavel que captura o valor do dado
  int numeroDado;

  // variavel que gerencia a entrada e sada de estrutura de controle
  int saida = 1;

  // mudando a semente que gera numeros aleatorios
  srand(time(NULL));

  printf("O jogo começou!\n");

  while (saida){ 
  printf("jogando o dado...\n");
  numeroDado = rand() % 6 + 1;
  printf("o numero sorteado foi: %d\n", numeroDado);
  scanf("%", &saida);
}
  printf("o jogo acabou!\n");

  return 0;
}

w