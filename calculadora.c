#include <stdio.h>

int main() {

//declaração das variáveis

int n1, n2, soma, multiplicacao, divisao, subtracao;

//entrada dos valores

printf("digite um número:");

scanf("%d", &n1);

printf("digite outro número:");

scanf("%d", &n2);

//realização das operações

soma = n1 + n2;

subtracao = n1 - n2;

divisao = n1 / n2;

multiplicacao = n1 * n2;

//exibição do resultado

printf("%d + %d = %d \n", n1, n2, soma);

printf("%d - %d = %d \n", n1, n2, subtracao);

printf("%d / %d = %d \n", n1, n2, divisao);

printf("%d * %d = %d", n1, n2, multiplicacao);

return 0;

}