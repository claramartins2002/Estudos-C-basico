#include <stdio.h>

int main() {

//declaração das variáveis

int n1, n2;

//coleta dos dados

printf("Digite dois números: ");

scanf("%d", &n1);

scanf("%d", &n2);

//exibição da mensagem

if(n1 > n2){

printf(" %d é maior que %d", n1, n2);

}

if(n2 > n1){

printf(" %d é maior que %d", n2, n1);

}

if(n1 == n2){

printf(" %d é igual a %d", n1, n2);

}

return 0;

}