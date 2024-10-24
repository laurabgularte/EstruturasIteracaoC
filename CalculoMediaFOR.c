#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
 float num, soma=0, media=0;
 int quantidadeNotas, i;
 printf("Digite a quantidade de notas usadas para calcular a media: ");
 scanf("%d", &quantidadeNotas);

 for (i=1; i<=quantidadeNotas; i++) {

 printf("Informe a nota %d:", i);
 scanf("%f", &num);
 soma += num;
 }

 media = soma / quantidadeNotas;
 printf("A media eh: %f", media);
}
