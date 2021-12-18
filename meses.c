#include <stdio.h>

int main() {

//declaração das variáveis

int mes;

char *meses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

//coleta do dado

printf("Digite o número de um mês: ");

//decisão de resposta para cada possibilidade

scanf("%d", &mes);

switch (mes){

case 1:

printf("%s", meses[0]);

break;

case 2:

printf("%s", meses[1]);

break;

case 3:

printf("%s", meses[2]);

break;

case 4:

printf("%s", meses[3]);

break;

case 5:

printf("%s", meses[4]);

break;

case 6:

printf("%s", meses[5]);

break;

case 7:

printf("%s", meses[6]);

break;

case 8:

printf("%s", meses[7]);

break;

case 9:

printf("%s", meses[8]);

break;

case 10:

printf("%s", meses[9]);

break;

case 11:

printf("%s", meses[10]);

break;

case 12:

printf("%s", meses[11]);

break;

default:

printf("mês inválido!");

}

return 0;
}