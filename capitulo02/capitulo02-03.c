#include <math.h>
/* Capítulo 02 - Exercício 03 */
#include <stdio.h>

void calculo(segundos) {
  int horas, minutos;
  horas = segundos / 3600;
  segundos %= 3600;
  minutos = segundos / 60;
  segundos %= 60;

  // Imprime o resultado
  printf("%d:%d:%d\n", horas, minutos, segundos);
  printf("--------\n");
}

int main(void) {
  calculo(43200);
  calculo(40000);
  calculo(81);
  return 0;
}
