#include <stdio.h>
//  Moedas: 1 gold coin
//  100 gp -> 1 platinum
//  10.000 gp -> 1 crystal coin (ou 100 platinum)

typedef struct {
  char* key;
  int value;
} item;

void celulas(int valor) {
  const item notas[] = { {"Cristal", 10000}, {"Platinum", 100}, {"Gold", 1}};
  for (int i = 0; i < 3; ++i) {
    printf("%s : %d \n", notas[i].key, (valor/notas[i].value));
    valor %= notas[i].value;
  }
  printf("-------- \n");
}

int main() {
  celulas(50250);
}
