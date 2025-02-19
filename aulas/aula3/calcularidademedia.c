#include<stdio.h>

int main () {
  int tati, matheus, rafael, isabele;

printf("digite a idade de Tati: ");
scanf("%d", &tati);

printf("digite a idade de Matheus: ");
scanf("%d", &matheus);

printf("digite a idade de Rafael: ");
scanf("%d", &rafael);

printf("digite a idade de Isabele: ");
scanf("%d", &isabele);

float idadeMedia;

idadeMedia = (tati + matheus + rafael + isabele) /4.0;

printf("A idade média da turma é %.2f anos./n", idadeMedia);

return 0;
}








