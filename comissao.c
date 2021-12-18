#include <stdio.h>

int main() {

// variáveis

float salarioFixo, salarioFinal, vendas;

char nome[80];

//coleta de dados

printf("Digite o nome do funcionário:");

scanf("%s", &nome);

printf("Digite o salário fixo:");

scanf("%f", &salarioFixo);

printf("Digite o valor vendido:");

scanf("%f", &vendas);

//cálculo do salário final

salarioFinal = salarioFixo + (vendas * 0.15);

//exibição do resultado

printf("nome: %s \n salário fixo: R$ %f \n salário final: R$ %f", nome, salarioFixo, salarioFinal);

return 0;

}