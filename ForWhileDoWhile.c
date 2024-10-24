#include <stdio.h>



int main (){

FOR

for (int i = 0; i<10; i++){
printf("%d\n", i);
}
//pode ter varios outros comandos;
//versao "compactada" do while
//usado normalmente quando se sabe o numero de repetições

WHILE

int j = 0;
while (j<10){
printf("%d\n", i);
//pode ter varios outros comandos;
}

DO WHILE

// comando do while: do comando1 /* ou bloco de comandos */ while (expressao);

int n;
int soma = 0;
do
{
printf("Digite um numero positivo para ser somado ou negativo para sair: ");
scanf("%d", &n);
if( n >= 0 )
soma = soma + n;
}while( n >= 0 );
printf("A soma eh %d\n", soma);
return 0;

}
