#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int colunas, somaDesejada;

  scanf(" %d %d", &colunas, &somaDesejada);

  int vetor[colunas];

  for (int x = 0; x < colunas; x++) {
    scanf(" %d", &vetor[x]);
  }

  int contador = 0;

  for (int i = 0; i < colunas; i++) {
    int soma = 0;
    for (int j = i; j < colunas; j++) {
      soma += vetor[j];
      if (soma == somaDesejada) {
        contador++;
      }
    }
  }

  printf("%d\n", contador);

  return 0;
}