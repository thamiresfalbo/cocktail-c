/* Capítulo 02 - Exercício 02 */
#include <math.h>
#include <stdio.h>

#define GALAO 3.7854

void calculo_gasolina(double preco_dolar,double cambio_dolar){
  double total = (preco_dolar/GALAO) * cambio_dolar;
  printf("Preço do litro da gasolina americana em reais: $%f", total);
}

int main(void)
{
  calculo_gasolina(3.711, 5.42);
  return 0;
}
