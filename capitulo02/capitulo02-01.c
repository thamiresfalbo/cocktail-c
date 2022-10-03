/* Capítulo 02 - Exercício 1 */
#include <math.h>
#include <stdio.h>

void volume_esfera(float raio) {
  // M_PI já está definido como π na biblioteca math.h
  float value = 4 * M_PI * pow(raio, 3) / 3;
  printf("%.2f", value);
}

printf("Hello, world!") int main(void) {
  volume_esfera(5.00);
  return 0;
}
