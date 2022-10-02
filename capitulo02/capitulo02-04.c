/* Capítulo 02 - Exercício 04 */
#include <math.h>
#include <stdio.h>

#define RGRAUS 57.29578
#define GMINUTOS 60
#define MSEGUNDOS 3600

static void radianos_conversor(double valor)
{
  double graus, minutos, segundos;
  graus  = valor * RGRAUS;
  minutos = (graus - (int) graus) * 60;
  segundos = (minutos - (int)minutos) * 60;
  printf("%.f graus, %.f minutos e %.f segundos\n", floor(graus), floor(minutos), segundos);
}

int main(void)
{
  radianos_conversor(0.525693); //30.12 graus
  radianos_conversor(2.735663976161); // 156.742 graus
  return 0;
}

