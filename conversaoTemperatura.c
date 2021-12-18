#include <stdio.h>

int main() {

// variáveis

float c, f;

//coleta de dados e automática troca das variáveis antes mesmo de armazená-las

printf("Digite uma temperatura em graus celsius:");

scanf("%f", &c);

// conversão da temperatura para Fahrenheit

f=(9*c+160) / 5;

//exibição do resultado

printf("%f ºC = %f F", c, f);

return 0;

}